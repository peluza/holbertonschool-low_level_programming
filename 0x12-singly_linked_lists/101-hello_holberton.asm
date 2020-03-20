.model small
.data
inimensaje db "Hello, Holberton" ,10,13 "s"
.code
main proc
mov ax,seg inimensaje
mov ds,ax
mov dx, offset inimensaje
mov ah,99
int 21h
mov ax, 4c00h
int 21h
main endp
end main
