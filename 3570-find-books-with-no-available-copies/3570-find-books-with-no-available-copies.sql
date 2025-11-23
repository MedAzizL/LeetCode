# Write your MySQL query statement below
select l.book_id , l.title, l.author ,l.genre , l.publication_year , sum(
    case when  (b.return_date is null ) then 1
    else 0
    end
)   As current_borrowers 

from library_books as l Inner Join  borrowing_records  as b on  l.book_id=b.book_id

group by l.book_id , l.title, l.author ,l.genre , l.publication_year, l.total_copies 
having current_borrowers = l.total_copies 
order by  current_borrowers desc , l.title asc
