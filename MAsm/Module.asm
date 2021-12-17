.data


.code

MyFunc proc
	mov rax, 261
	add ah, al
	mov rax, 511
	add al, ah
	mov rax, -1
	mov ah, 0
	mov ax, 0
	mov eax, 0
	ret
MyFunc endp

end