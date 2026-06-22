import Control.Monad (replicateM_)
import Data.List (intersperse)

getLineOfInts :: IO [Int]
getLineOfInts = return . map read . words =<< getLine

getInt :: IO Int
getInt = return . read =<< getLine

main = do
    numTestcases <- getInt
    replicateM_ numTestcases handleTestCase

-- l = Aw + B
-- (lw + c) = x / p

handleTestCase :: IO ()
handleTestCase = do
    (a:b:c:p:xs) <- getLineOfInts
    let solutions = filter (\w -> ((a*(w^2) + b*w + c) `mod` p == 0)) [1..p]
    putStrLn $ (show $ length solutions) ++ " " ++ (unwords $ map show solutions)
