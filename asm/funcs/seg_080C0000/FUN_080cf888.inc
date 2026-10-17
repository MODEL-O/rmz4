@ FUN_080cf888  entry 0x080cf888  size 36
.thumb
.org 0xcf888
FUN_080cf888:
	push {r4, lr}	@ 000cf888 10b5
.org 0xcf88a
	adds r3, r0, #0	@ 000cf88a 031c
.org 0xcf88c
	ldr r0, [r3, #40]	@ 000cf88c 986a
.org 0xcf88e
	adds r1, r0, #0	@ 000cf88e 011c
.org 0xcf890
	adds r1, #204	@ 000cf890 cc31
.org 0xcf892
	ldrh r2, [r1, #0]	@ 000cf892 0a88
.org 0xcf894
	movs r4, #0	@ 000cf894 0024
.org 0xcf896
	ldrsh r0, [r1, r4]	@ 000cf896 085f
.org 0xcf898
	cmp r0, #0	@ 000cf898 0028
.org 0xcf89a
	beq.n 0xcf8a0	@ 000cf89a 01d0
.org 0xcf89c
	subs r0, r2, #1	@ 000cf89c 501e
.org 0xcf89e
	strh r0, [r1, #0]	@ 000cf89e 0880
.org 0xcf8a0
	adds r0, r3, #0	@ 000cf8a0 181c
.org 0xcf8a2
	bl 0xbd3f8	@ 000cf8a2 edf7a9fd
.org 0xcf8a6
	pop {r4}	@ 000cf8a6 10bc
.org 0xcf8a8
	pop {r0}	@ 000cf8a8 01bc
.org 0xcf8aa
	bx r0	@ 000cf8aa 0047
