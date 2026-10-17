@ FUN_08038808  entry 0x08038808  size 34
.thumb
.org 0x38808
FUN_08038808:
	push {lr}	@ 00038808 00b5
.org 0x3880a
	movs r2, #159	@ 0003880a 9f22
.org 0x3880c
	lsls r2, r2, #1	@ 0003880c 5200
.org 0x3880e
	adds r1, r0, r2	@ 0003880e 8118
.org 0x38810
	ldrb r0, [r1, #0]	@ 00038810 0878
.org 0x38812
	cmp r0, #0	@ 00038812 0028
.org 0x38814
	bne.n 0x3881c	@ 00038814 02d1
.org 0x38816
	movs r0, #128	@ 00038816 8020
.org 0x38818
	lsls r0, r0, #3	@ 00038818 c000
.org 0x3881a
	b.n 0x38826	@ 0003881a 04e0
.org 0x3881c
	ldrb r1, [r1, #0]	@ 0003881c 0978
.org 0x3881e
	movs r0, #128	@ 0003881e 8020
.org 0x38820
	lsls r0, r0, #1	@ 00038820 4000
.org 0x38822
	subs r0, r0, r1	@ 00038822 401a
.org 0x38824
	lsls r0, r0, #2	@ 00038824 8000
.org 0x38826
	pop {r1}	@ 00038826 02bc
.org 0x38828
	bx r1	@ 00038828 0847
