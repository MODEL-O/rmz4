@ FUN_080722ac  entry 0x080722ac  size 68
.thumb
.org 0x722ac
FUN_080722ac:
	push {r4, lr}	@ 000722ac 10b5
.org 0x722ae
	adds r2, r0, #0	@ 000722ae 021c
.org 0x722b0
	ldrb r0, [r2, #10]	@ 000722b0 907a
.org 0x722b2
	lsrs r3, r0, #4	@ 000722b2 0309
.org 0x722b4
	movs r0, #1	@ 000722b4 0120
.org 0x722b6
	ands r3, r0	@ 000722b6 0340
.org 0x722b8
	movs r4, #0	@ 000722b8 0024
.org 0x722ba
	ldr r0, [pc, #24]	@ 000722ba 0648
.org 0x722bc
	ldr r0, [r0, #0]	@ 000722bc 0068
.org 0x722be
	ldr r1, [r2, #84]	@ 000722be 516d
.org 0x722c0
	ldr r0, [r0, #84]	@ 000722c0 406d
.org 0x722c2
	cmp r1, r0	@ 000722c2 8142
.org 0x722c4
	bge.n 0x722c8	@ 000722c4 00da
.org 0x722c6
	movs r4, #1	@ 000722c6 0124
.org 0x722c8
	cmp r4, r3	@ 000722c8 9c42
.org 0x722ca
	beq.n 0x722d8	@ 000722ca 05d0
.org 0x722cc
	movs r1, #0	@ 000722cc 0021
.org 0x722ce
	movs r0, #26	@ 000722ce 1a20
.org 0x722d0
	b.n 0x722dc	@ 000722d0 04e0
.org 0x722d2
	.byte 0x00	@ 000722d2 data
.org 0x722d3
	.byte 0x00	@ 000722d3 data
.org 0x722d4
	.byte 0xf0,0xdb,0x02,0x02	@ 000722d4 data
.org 0x722d8
	movs r1, #0	@ 000722d8 0021
.org 0x722da
	movs r0, #28	@ 000722da 1c20
.org 0x722dc
	strb r0, [r2, #14]	@ 000722dc 9073
.org 0x722de
	strb r1, [r2, #15]	@ 000722de d173
.org 0x722e0
	ldr r0, [pc, #20]	@ 000722e0 0548
.org 0x722e2
	ldrb r1, [r2, #13]	@ 000722e2 517b
.org 0x722e4
	lsls r1, r1, #2	@ 000722e4 8900
.org 0x722e6
	adds r1, r1, r0	@ 000722e6 0918
.org 0x722e8
	ldr r1, [r1, #0]	@ 000722e8 0968
.org 0x722ea
	adds r0, r2, #0	@ 000722ea 101c
.org 0x722ec
	bl 0x128f80	@ 000722ec b6f048fe
