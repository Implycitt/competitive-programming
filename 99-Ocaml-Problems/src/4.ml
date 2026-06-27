(* Non Tail Recursive *)
let rec length (xs: 'a list): int =
  match xs with
  | [] -> 0
  | _ :: rest -> 1 + length rest

(* Tail Recursive *)
let length_tail (xs: 'a list): int = 
  let rec length_tail' (xs: 'a list) (result: int): int =
    match xs with
    | [] -> result 
    | _ :: rest -> length_tail' rest (result + 1)
  in length_tail' xs 0

(* Secret Solution *)
let best_length (xs: 'a list): int =
  let result = ref 0 in
  let ys = ref xs in
  while !ys != [] do
    result := !result + 1;
    ys := List.tl !ys
  done;
  !result
