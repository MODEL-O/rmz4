@ FUN_08032790  entry 0x08032790  size 44
.thumb
.org 0x32790
FUN_08032790:
	push {r4, lr}	@ 00032790 10b5
.org 0x32792
	adds r4, r0, #0	@ 00032792 041c
.org 0x32794
	movs r0, #184	@ 00032794 b820
.org 0x32796
	lsls r0, r0, #1	@ 00032796 4000
.org 0x32798
	adds r1, r4, r0	@ 00032798 2118
.org 0x3279a
	movs r0, #1	@ 0003279a 0120
.org 0x3279c
	strb r0, [r1, #0]	@ 0003279c 0870
.org 0x3279e
	movs r0, #11	@ 0003279e 0b20
.org 0x327a0
	bl 0x2b10	@ 000327a0 d0f7b6f9
.org 0x327a4
	ldr r0, [r4, #84]	@ 000327a4 606d
.org 0x327a6
	ldr r1, [r4, #88]	@ 000327a6 a16d
.org 0x327a8
	ldr r2, [pc, #16]	@ 000327a8 044a
.org 0x327aa
	adds r1, r1, r2	@ 000327aa 8918
.org 0x327ac
	movs r2, #1	@ 000327ac 0122
.org 0x327ae
	bl 0xd19a8	@ 000327ae 9ff0fbf8
.org 0x327b2
	movs r0, #3	@ 000327b2 0320
.org 0x327b4
	strb r0, [r4, #15]	@ 000327b4 e073
.org 0x327b6
	pop {r4}	@ 000327b6 10bc
.org 0x327b8
	pop {r0}	@ 000327b8 01bc
.org 0x327ba
	bx r0	@ 000327ba 0047
