@ FUN_08081b88  entry 0x08081b88  size 172
.thumb
.org 0x81b88
FUN_08081b88:
	push {r4, r5, r6, r7, lr}	@ 00081b88 f0b5
.org 0x81b8a
	sub sp, #8	@ 00081b8a 82b0
.org 0x81b8c
	adds r7, r0, #0	@ 00081b8c 071c
.org 0x81b8e
	movs r0, #42	@ 00081b8e 2a20
.org 0x81b90
	bl 0x2b10	@ 00081b90 80f7beff
.org 0x81b94
	ldrb r1, [r7, #10]	@ 00081b94 b97a
.org 0x81b96
	movs r0, #254	@ 00081b96 fe20
.org 0x81b98
	ands r0, r1	@ 00081b98 0840
.org 0x81b9a
	movs r1, #0	@ 00081b9a 0021
.org 0x81b9c
	strb r0, [r7, #10]	@ 00081b9c b872
.org 0x81b9e
	adds r0, r7, #0	@ 00081b9e 381c
.org 0x81ba0
	adds r0, #140	@ 00081ba0 8c30
.org 0x81ba2
	str r1, [r0, #0]	@ 00081ba2 0160
.org 0x81ba4
	adds r0, #4	@ 00081ba4 0430
.org 0x81ba6
	str r1, [r0, #0]	@ 00081ba6 0160
.org 0x81ba8
	adds r0, #4	@ 00081ba8 0430
.org 0x81baa
	strb r1, [r0, #0]	@ 00081baa 0170
.org 0x81bac
	ldrb r1, [r7, #10]	@ 00081bac b97a
.org 0x81bae
	movs r0, #251	@ 00081bae fb20
.org 0x81bb0
	ands r0, r1	@ 00081bb0 0840
.org 0x81bb2
	strb r0, [r7, #10]	@ 00081bb2 b872
.org 0x81bb4
	ldr r6, [pc, #124]	@ 00081bb4 1f4e
.org 0x81bb6
	ldr r0, [r6, #0]	@ 00081bb6 3068
.org 0x81bb8
	ldr r5, [pc, #124]	@ 00081bb8 1f4d
.org 0x81bba
	muls r0, r5	@ 00081bba 6843
.org 0x81bbc
	ldr r2, [pc, #124]	@ 00081bbc 1f4a
.org 0x81bbe
	adds r0, r0, r2	@ 00081bbe 8018
.org 0x81bc0
	lsls r0, r0, #1	@ 00081bc0 4000
.org 0x81bc2
	lsrs r4, r0, #1	@ 00081bc2 4408
.org 0x81bc4
	lsrs r0, r0, #17	@ 00081bc4 400c
.org 0x81bc6
	movs r3, #7	@ 00081bc6 0723
.org 0x81bc8
	ands r0, r3	@ 00081bc8 1840
.org 0x81bca
	subs r0, #3	@ 00081bca 0338
.org 0x81bcc
	lsls r0, r0, #8	@ 00081bcc 0002
.org 0x81bce
	ldr r1, [r7, #84]	@ 00081bce 796d
.org 0x81bd0
	adds r1, r1, r0	@ 00081bd0 0918
.org 0x81bd2
	str r1, [sp, #0]	@ 00081bd2 0091
.org 0x81bd4
	adds r0, r4, #0	@ 00081bd4 201c
.org 0x81bd6
	muls r0, r5	@ 00081bd6 6843
.org 0x81bd8
	adds r0, r0, r2	@ 00081bd8 8018
.org 0x81bda
	lsls r0, r0, #1	@ 00081bda 4000
.org 0x81bdc
	lsrs r1, r0, #1	@ 00081bdc 4108
.org 0x81bde
	str r1, [r6, #0]	@ 00081bde 3160
.org 0x81be0
	lsrs r0, r0, #17	@ 00081be0 400c
.org 0x81be2
	ands r0, r3	@ 00081be2 1840
.org 0x81be4
	subs r0, #3	@ 00081be4 0338
.org 0x81be6
	lsls r0, r0, #8	@ 00081be6 0002
.org 0x81be8
	ldr r1, [r7, #88]	@ 00081be8 b96d
.org 0x81bea
	adds r1, r1, r0	@ 00081bea 0918
.org 0x81bec
	str r1, [sp, #4]	@ 00081bec 0191
.org 0x81bee
	movs r0, #1	@ 00081bee 0120
.org 0x81bf0
	mov r1, sp	@ 00081bf0 6946
.org 0x81bf2
	bl 0xd0c88	@ 00081bf2 4ff049f8
.org 0x81bf6
	adds r4, r7, #0	@ 00081bf6 3c1c
.org 0x81bf8
	adds r4, #84	@ 00081bf8 5434
.org 0x81bfa
	movs r0, #4	@ 00081bfa 0420
.org 0x81bfc
	movs r1, #46	@ 00081bfc 2e21
.org 0x81bfe
	adds r2, r4, #0	@ 00081bfe 221c
.org 0x81c00
	bl 0x2ab88	@ 00081c00 a8f7c2ff
.org 0x81c04
	ldr r2, [pc, #56]	@ 00081c04 0e4a
.org 0x81c06
	ldrh r1, [r2, #12]	@ 00081c06 9189
.org 0x81c08
	ldr r0, [pc, #56]	@ 00081c08 0e48
.org 0x81c0a
	cmp r1, r0	@ 00081c0a 8142
.org 0x81c0c
	bhi.n 0x81c12	@ 00081c0c 01d8
.org 0x81c0e
	adds r0, r1, #1	@ 00081c0e 481c
.org 0x81c10
	strh r0, [r2, #12]	@ 00081c10 9081
.org 0x81c12
	adds r0, r7, #0	@ 00081c12 381c
.org 0x81c14
	adds r1, r4, #0	@ 00081c14 211c
.org 0x81c16
	bl 0x2abe0	@ 00081c16 a8f7e3ff
.org 0x81c1a
	ldr r1, [pc, #44]	@ 00081c1a 0b49
.org 0x81c1c
	ldrb r0, [r7, #9]	@ 00081c1c 787a
.org 0x81c1e
	lsls r0, r0, #2	@ 00081c1e 8000
.org 0x81c20
	adds r0, r0, r1	@ 00081c20 4018
.org 0x81c22
	movs r1, #4	@ 00081c22 0421
.org 0x81c24
	str r1, [r7, #12]	@ 00081c24 f960
.org 0x81c26
	ldr r0, [r0, #0]	@ 00081c26 0068
.org 0x81c28
	ldr r0, [r0, #16]	@ 00081c28 0069
.org 0x81c2a
	str r0, [r7, #20]	@ 00081c2a 7861
.org 0x81c2c
	add sp, #8	@ 00081c2c 02b0
.org 0x81c2e
	pop {r4, r5, r6, r7}	@ 00081c2e f0bc
.org 0x81c30
	pop {r0}	@ 00081c30 01bc
.org 0x81c32
	bx r0	@ 00081c32 0047
