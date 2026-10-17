@ FUN_08127d8c  entry 0x08127d8c  size 76
.thumb
.org 0x127d8c
FUN_08127d8c:
	push {lr}	@ 00127d8c 00b5
.org 0x127d8e
	sub sp, #4	@ 00127d8e 81b0
.org 0x127d90
	ldr r0, [pc, #68]	@ 00127d90 1148
.org 0x127d92
	ldr r2, [r0, #0]	@ 00127d92 0268
.org 0x127d94
	ldr r1, [r2, #0]	@ 00127d94 1168
.org 0x127d96
	ldr r3, [pc, #68]	@ 00127d96 114b
.org 0x127d98
	adds r0, r1, r3	@ 00127d98 c818
.org 0x127d9a
	cmp r0, #1	@ 00127d9a 0128
.org 0x127d9c
	bhi.n 0x127dd2	@ 00127d9c 19d8
.org 0x127d9e
	adds r0, r1, #0	@ 00127d9e 081c
.org 0x127da0
	adds r0, #10	@ 00127da0 0a30
.org 0x127da2
	str r0, [r2, #0]	@ 00127da2 1060
.org 0x127da4
	ldr r3, [pc, #56]	@ 00127da4 0e4b
.org 0x127da6
	ldr r0, [r3, #0]	@ 00127da6 1868
.org 0x127da8
	movs r1, #128	@ 00127da8 8021
.org 0x127daa
	lsls r1, r1, #18	@ 00127daa 8904
.org 0x127dac
	ands r0, r1	@ 00127dac 0840
.org 0x127dae
	cmp r0, #0	@ 00127dae 0028
.org 0x127db0
	beq.n 0x127db6	@ 00127db0 01d0
.org 0x127db2
	ldr r0, [pc, #48]	@ 00127db2 0c48
.org 0x127db4
	str r0, [r3, #0]	@ 00127db4 1860
.org 0x127db6
	ldr r1, [pc, #48]	@ 00127db6 0c49
.org 0x127db8
	movs r3, #128	@ 00127db8 8023
.org 0x127dba
	lsls r3, r3, #3	@ 00127dba db00
.org 0x127dbc
	adds r0, r3, #0	@ 00127dbc 181c
.org 0x127dbe
	strh r0, [r1, #0]	@ 00127dbe 0880
.org 0x127dc0
	movs r0, #0	@ 00127dc0 0020
.org 0x127dc2
	str r0, [sp, #0]	@ 00127dc2 0090
.org 0x127dc4
	movs r0, #212	@ 00127dc4 d420
.org 0x127dc6
	lsls r0, r0, #2	@ 00127dc6 8000
.org 0x127dc8
	adds r1, r2, r0	@ 00127dc8 1118
.org 0x127dca
	ldr r2, [pc, #32]	@ 00127dca 084a
.org 0x127dcc
	mov r0, sp	@ 00127dcc 6846
.org 0x127dce
	bl 0x128be4	@ 00127dce 00f009ff
.org 0x127dd2
	add sp, #4	@ 00127dd2 01b0
.org 0x127dd4
	pop {r0}	@ 00127dd4 01bc
.org 0x127dd6
	bx r0	@ 00127dd6 0047
