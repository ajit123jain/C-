def BitmapHoles(strArr)
  # code goes here
  str_arr = strArr.dup.map(&:dup)
  count_i = 0 
  row_idx = 0
  while row_idx < str_arr.length
    col_idx = 0
    while col_idx < str_arr[row_idx].length
      if str_arr[row_idx][col_idx] == "0"
          count_i += 1
          str_arr = fill_hole(str_arr, row_idx, col_idx)
      end
      col_idx += 1
    end
    row_idx += 1
  end
  count_i
end

def fill_hole(arr, row_idx, col_idx)
  str_arr = arr.dup.map(&:dup)
  
  return str_arr if str_arr[row_idx][col_idx] == "1"
  
  str_arr[row_idx][col_idx] = "1" #current
  str_arr = fill_hole(str_arr, row_idx - 1, col_idx) if row_idx > 0 #up
  str_arr = fill_hole(str_arr, row_idx + 1, col_idx) if str_arr[row_idx + 1] #down
  str_arr = fill_hole(str_arr, row_idx, col_idx - 1) if col_idx > 0 #left
  str_arr = fill_hole(str_arr, row_idx, col_idx + 1) if str_arr[row_idx][col_idx + 1] #right
  
  put str_arr
  str_arr
end

# keep this function call here 
puts BitmapHoles(STDIN.gets)