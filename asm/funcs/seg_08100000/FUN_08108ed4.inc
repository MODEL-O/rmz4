@ FUN_08108ed4  entry 0x08108ed4  size 52
.thumb
.org 0x108ed4
FUN_08108ed4:
	push {r4, lr}	@ 00108ed4 10b5
.org 0x108ed6
	lsls r0, r0, #24	@ 00108ed6 0006
.org 0x108ed8
	lsrs r2, r0, #24	@ 00108ed8 020e
.org 0x108eda
	ldr r1, [pc, #44]	@ 00108eda 0b49
.org 0x108edc
	ldr r1, [r1, #0]	@ 00108edc 0968
.org 0x108ede
	lsrs r0, r0, #25	@ 00108ede 400e
.org 0x108ee0
	adds r4, r1, r0	@ 00108ee0 0c18
.org 0x108ee2
	ldrb r3, [r4, #0]	@ 00108ee2 2378
.org 0x108ee4
	movs r0, #1	@ 00108ee4 0120
.org 0x108ee6
	ands r2, r0	@ 00108ee6 0240
.org 0x108ee8
	lsls r2, r2, #2	@ 00108ee8 9200
.org 0x108eea
	adds r1, r3, #0	@ 00108eea 191c
.org 0x108eec
	asrs r1, r2	@ 00108eec 1141
.org 0x108eee
	movs r0, #15	@ 00108eee 0f20
.org 0x108ef0
	ands r1, r0	@ 00108ef0 0140
.org 0x108ef2
	cmp r1, #8	@ 00108ef2 0829
.org 0x108ef4
	bgt.n 0x108f02	@ 00108ef4 05dc
.org 0x108ef6
	adds r1, #1	@ 00108ef6 0131
.org 0x108ef8
	lsls r1, r2	@ 00108ef8 9140
.org 0x108efa
	lsls r0, r2	@ 00108efa 9040
.org 0x108efc
	bics r3, r0	@ 00108efc 8343
.org 0x108efe
	orrs r1, r3	@ 00108efe 1943
.org 0x108f00
	strb r1, [r4, #0]	@ 00108f00 2170
.org 0x108f02
	pop {r4}	@ 00108f02 10bc
.org 0x108f04
	pop {r0}	@ 00108f04 01bc
.org 0x108f06
	bx r0	@ 00108f06 0047
