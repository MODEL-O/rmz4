@ FUN_080bede0  entry 0x080bede0  size 72
.thumb
.org 0xbede0
FUN_080bede0:
	push {r4, r5, lr}	@ 000bede0 30b5
.org 0xbede2
	adds r5, r0, #0	@ 000bede2 051c
.org 0xbede4
	ldr r0, [pc, #64]	@ 000bede4 1048
.org 0xbede6
	ldr r0, [r0, #0]	@ 000bede6 0068
.org 0xbede8
	bl 0x5500	@ 000bede8 46f78afb
.org 0xbedec
	adds r4, r0, #0	@ 000bedec 041c
.org 0xbedee
	cmp r4, #0	@ 000bedee 002c
.org 0xbedf0
	beq.n 0xbee20	@ 000bedf0 16d0
.org 0xbedf2
	adds r1, r4, #0	@ 000bedf2 211c
.org 0xbedf4
	adds r1, #37	@ 000bedf4 2531
.org 0xbedf6
	movs r3, #0	@ 000bedf6 0023
.org 0xbedf8
	movs r0, #8	@ 000bedf8 0820
.org 0xbedfa
	strb r0, [r1, #0]	@ 000bedfa 0870
.org 0xbedfc
	ldr r1, [pc, #44]	@ 000bedfc 0b49
.org 0xbedfe
	movs r0, #6	@ 000bedfe 0620
.org 0xbee00
	strb r0, [r4, #9]	@ 000bee00 6072
.org 0xbee02
	ldr r0, [r1, #24]	@ 000bee02 8869
.org 0xbee04
	ldr r0, [r0, #0]	@ 000bee04 0068
.org 0xbee06
	str r0, [r4, #20]	@ 000bee06 6061
.org 0xbee08
	movs r2, #0	@ 000bee08 0022
.org 0xbee0a
	strh r3, [r4, #32]	@ 000bee0a 2384
.org 0xbee0c
	adds r0, r4, #0	@ 000bee0c 201c
.org 0xbee0e
	adds r0, #34	@ 000bee0e 2230
.org 0xbee10
	strb r2, [r0, #0]	@ 000bee10 0270
.org 0xbee12
	ldr r0, [r5, #0]	@ 000bee12 2868
.org 0xbee14
	ldr r1, [r5, #4]	@ 000bee14 6968
.org 0xbee16
	str r0, [r4, #84]	@ 000bee16 6065
.org 0xbee18
	str r1, [r4, #88]	@ 000bee18 a165
.org 0xbee1a
	movs r0, #3	@ 000bee1a 0320
.org 0xbee1c
	strb r0, [r4, #16]	@ 000bee1c 2074
.org 0xbee1e
	strb r2, [r4, #17]	@ 000bee1e 6274
.org 0xbee20
	adds r0, r4, #0	@ 000bee20 201c
.org 0xbee22
	pop {r4, r5}	@ 000bee22 30bc
.org 0xbee24
	pop {r1}	@ 000bee24 02bc
.org 0xbee26
	bx r1	@ 000bee26 0847
