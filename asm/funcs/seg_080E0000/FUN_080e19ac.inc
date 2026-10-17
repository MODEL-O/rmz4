@ FUN_080e19ac  entry 0x080e19ac  size 50
.thumb
.org 0xe19ac
FUN_080e19ac:
	push {r4, lr}	@ 000e19ac 10b5
.org 0xe19ae
	adds r4, r0, #0	@ 000e19ae 041c
.org 0xe19b0
	ldrb r0, [r4, #13]	@ 000e19b0 607b
.org 0xe19b2
	cmp r0, #0	@ 000e19b2 0028
.org 0xe19b4
	bne.n 0xe19cc	@ 000e19b4 0ad1
.org 0xe19b6
	adds r0, r4, #0	@ 000e19b6 201c
.org 0xe19b8
	adds r0, #118	@ 000e19b8 7630
.org 0xe19ba
	ldrh r0, [r0, #0]	@ 000e19ba 0088
.org 0xe19bc
	movs r1, #13	@ 000e19bc 0d21
.org 0xe19be
	orrs r1, r0	@ 000e19be 0143
.org 0xe19c0
	adds r0, r4, #0	@ 000e19c0 201c
.org 0xe19c2
	bl 0x1cf00	@ 000e19c2 3bf79dfa
.org 0xe19c6
	ldrb r0, [r4, #13]	@ 000e19c6 607b
.org 0xe19c8
	adds r0, #1	@ 000e19c8 0130
.org 0xe19ca
	strb r0, [r4, #13]	@ 000e19ca 6073
.org 0xe19cc
	adds r0, r4, #0	@ 000e19cc 201c
.org 0xe19ce
	bl 0xe19e0	@ 000e19ce 00f007f8
.org 0xe19d2
	adds r0, r4, #0	@ 000e19d2 201c
.org 0xe19d4
	bl 0xe1a28	@ 000e19d4 00f028f8
.org 0xe19d8
	pop {r4}	@ 000e19d8 10bc
.org 0xe19da
	pop {r0}	@ 000e19da 01bc
.org 0xe19dc
	bx r0	@ 000e19dc 0047
