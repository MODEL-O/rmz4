@ FUN_080689ac  entry 0x080689ac  size 50
.thumb
.org 0x689ac
FUN_080689ac:
	push {r4, lr}	@ 000689ac 10b5
.org 0x689ae
	adds r4, r0, #0	@ 000689ae 041c
.org 0x689b0
	ldr r0, [r4, #20]	@ 000689b0 6069
.org 0x689b2
	movs r1, #1	@ 000689b2 0121
.org 0x689b4
	ands r0, r1	@ 000689b4 0840
.org 0x689b6
	cmp r0, #0	@ 000689b6 0028
.org 0x689b8
	beq.n 0x689d8	@ 000689b8 0ed0
.org 0x689ba
	movs r0, #74	@ 000689ba 4a20
.org 0x689bc
	bl 0x6984	@ 000689bc 9df7e2ff
.org 0x689c0
	ldr r0, [r4, #12]	@ 000689c0 e068
.org 0x689c2
	ldr r0, [r0, #44]	@ 000689c2 c06a
.org 0x689c4
	ldr r2, [r4, #44]	@ 000689c4 e26a
.org 0x689c6
	movs r3, #0	@ 000689c6 0023
.org 0x689c8
	ldr r1, [r0, #84]	@ 000689c8 416d
.org 0x689ca
	ldr r0, [r2, #84]	@ 000689ca 506d
.org 0x689cc
	cmp r1, r0	@ 000689cc 8142
.org 0x689ce
	ble.n 0x689d2	@ 000689ce 00dd
.org 0x689d0
	movs r3, #1	@ 000689d0 0123
.org 0x689d2
	adds r0, r2, #0	@ 000689d2 101c
.org 0x689d4
	adds r0, #216	@ 000689d4 d830
.org 0x689d6
	strb r3, [r0, #0]	@ 000689d6 0370
.org 0x689d8
	pop {r4}	@ 000689d8 10bc
.org 0x689da
	pop {r0}	@ 000689da 01bc
.org 0x689dc
	bx r0	@ 000689dc 0047
