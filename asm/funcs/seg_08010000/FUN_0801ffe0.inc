@ FUN_0801ffe0  entry 0x0801ffe0  size 88
.thumb
.org 0x1ffe0
FUN_0801ffe0:
	push {lr}	@ 0001ffe0 00b5
.org 0x1ffe2
	ldr r1, [pc, #84]	@ 0001ffe2 1549
.org 0x1ffe4
	adds r0, r1, #0	@ 0001ffe4 081c
.org 0x1ffe6
	adds r0, #214	@ 0001ffe6 d630
.org 0x1ffe8
	ldrh r2, [r0, #0]	@ 0001ffe8 0288
.org 0x1ffea
	ldr r0, [r1, #0]	@ 0001ffea 0868
.org 0x1ffec
	movs r3, #208	@ 0001ffec d023
.org 0x1ffee
	negs r3, r3	@ 0001ffee 5b42
.org 0x1fff0
	adds r3, r3, r1	@ 0001fff0 5b18
.org 0x1fff2
	mov ip, r3	@ 0001fff2 9c46
.org 0x1fff4
	cmp r0, #0	@ 0001fff4 0028
.org 0x1fff6
	beq.n 0x2000a	@ 0001fff6 08d0
.org 0x1fff8
	ldr r0, [r1, #0]	@ 0001fff8 0868
.org 0x1fffa
	lsls r0, r0, #8	@ 0001fffa 0002
.org 0x1fffc
	cmp r2, r0	@ 0001fffc 8242
.org 0x1fffe
	bge.n 0x20002	@ 0001fffe 00da
.org 0x20000
	adds r2, r0, #0	@ 00020000 021c
.org 0x20002
	adds r1, #12	@ 00020002 0c31
.org 0x20004
	ldr r0, [r1, #0]	@ 00020004 0868
.org 0x20006
	cmp r0, #0	@ 00020006 0028
.org 0x20008
	bne.n 0x1fff8	@ 00020008 f6d1
.org 0x2000a
	movs r0, #128	@ 0002000a 8020
.org 0x2000c
	lsls r0, r0, #6	@ 0002000c 8001
.org 0x2000e
	cmp r2, r0	@ 0002000e 8242
.org 0x20010
	ble.n 0x20014	@ 00020010 00dd
.org 0x20012
	adds r2, r0, #0	@ 00020012 021c
.org 0x20014
	lsls r0, r2, #4	@ 00020014 1001
.org 0x20016
	subs r0, r0, r2	@ 00020016 801a
.org 0x20018
	asrs r0, r0, #4	@ 00020018 0011
.org 0x2001a
	movs r3, #211	@ 0002001a d323
.org 0x2001c
	lsls r3, r3, #1	@ 0002001c 5b00
.org 0x2001e
	add r3, ip	@ 0002001e 6344
.org 0x20020
	movs r1, #0	@ 00020020 0021
.org 0x20022
	strh r0, [r3, #0]	@ 00020022 1880
.org 0x20024
	movs r0, #210	@ 00020024 d220
.org 0x20026
	lsls r0, r0, #1	@ 00020026 4000
.org 0x20028
	add r0, ip	@ 00020028 6044
.org 0x2002a
	strh r1, [r0, #0]	@ 0002002a 0180
.org 0x2002c
	mov r0, ip	@ 0002002c 6046
.org 0x2002e
	adds r0, #208	@ 0002002e d030
.org 0x20030
	str r1, [r0, #0]	@ 00020030 0160
.org 0x20032
	asrs r0, r2, #8	@ 00020032 1012
.org 0x20034
	pop {r1}	@ 00020034 02bc
.org 0x20036
	bx r1	@ 00020036 0847
