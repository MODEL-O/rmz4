@ FUN_080a669c  entry 0x080a669c  size 24
.thumb
.org 0xa669c
FUN_080a669c:
	push {lr}	@ 000a669c 00b5
.org 0xa669e
	adds r1, r0, #0	@ 000a669e 011c
.org 0xa66a0
	ldrb r0, [r1, #18]	@ 000a66a0 887c
.org 0xa66a2
	cmp r0, #0	@ 000a66a2 0028
.org 0xa66a4
	beq.n 0xa66ae	@ 000a66a4 03d0
.org 0xa66a6
	subs r0, #1	@ 000a66a6 0138
.org 0xa66a8
	strb r0, [r1, #18]	@ 000a66a8 8874
.org 0xa66aa
	movs r0, #0	@ 000a66aa 0020
.org 0xa66ac
	b.n 0xa66b0	@ 000a66ac 00e0
.org 0xa66ae
	movs r0, #1	@ 000a66ae 0120
.org 0xa66b0
	pop {r1}	@ 000a66b0 02bc
.org 0xa66b2
	bx r1	@ 000a66b2 0847
