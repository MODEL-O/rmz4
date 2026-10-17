@ FUN_080002dc  entry 0x080002dc  size 34
.thumb
.org 0x2dc
FUN_080002dc:
	push {r4, r5, r6, r7, lr}	@ 000002dc f0b5
.org 0x2de
	mov r4, r8	@ 000002de 4446
.org 0x2e0
	mov r5, r9	@ 000002e0 4d46
.org 0x2e2
	mov r6, sl	@ 000002e2 5646
.org 0x2e4
	mov r7, fp	@ 000002e4 5f46
.org 0x2e6
	push {r4, r5, r6, r7}	@ 000002e6 f0b4
.org 0x2e8
	mov r4, sp	@ 000002e8 6c46
.org 0x2ea
	str r4, [r3, #0]	@ 000002ea 1c60
.org 0x2ec
	mov lr, r1	@ 000002ec 8e46
.org 0x2ee
	mov sp, r2	@ 000002ee 9546
.org 0x2f0
	pop {r4, r5, r6, r7}	@ 000002f0 f0bc
.org 0x2f2
	mov fp, r7	@ 000002f2 bb46
.org 0x2f4
	mov sl, r6	@ 000002f4 b246
.org 0x2f6
	mov r9, r5	@ 000002f6 a946
.org 0x2f8
	mov r8, r4	@ 000002f8 a046
.org 0x2fa
	pop {r4, r5, r6, r7}	@ 000002fa f0bc
.org 0x2fc
	bx lr	@ 000002fc 7047
