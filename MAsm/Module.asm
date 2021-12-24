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

MyFunc2 proc
	mov rcx, 517
	sub cl, ch
	mov cl, 0
	mov rcx, -1
	mov ecx, 0
	ret
MyFunc2 endp

MFunc3 proc
	mov rdx, 766

	add dl, dh

	mov dh, 3

	mov rdx, -1
	mov edx, 0

	ret
MFunc3 endp

MFunc4 proc
	mov RAX, 270
	sub AL, AH
	mov AL, 0
	mov RAX, -1
	mov EAX, 0
	ret
MFunc4 endp

MFunc5 proc
	mov eax, 514
	sub ah, al
	ret
MFunc5 endp

end