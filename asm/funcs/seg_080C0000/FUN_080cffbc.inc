@ FUN_080cffbc  entry 0x080cffbc  size 172
.thumb
.org 0xcffbc
FUN_080cffbc:
	push {r4, r5, r6, lr}	@ 000cffbc 70b5
.org 0xcffbe
	adds r6, r0, #0	@ 000cffbe 061c
.org 0xcffc0
	ldrb r4, [r6, #17]	@ 000cffc0 747c
.org 0xcffc2
	movs r0, #203	@ 000cffc2 cb20
.org 0xcffc4
	lsls r0, r0, #1	@ 000cffc4 4000
.org 0xcffc6
	bl 0x2b10	@ 000cffc6 32f7a3fd
.org 0xcffca
	ldr r1, [pc, #68]	@ 000cffca 1149
.org 0xcffcc
	ldrb r0, [r6, #9]	@ 000cffcc 707a
.org 0xcffce
	lsls r0, r0, #2	@ 000cffce 8000
.org 0xcffd0
	adds r0, r0, r1	@ 000cffd0 4018
.org 0xcffd2
	movs r1, #1	@ 000cffd2 0121
.org 0xcffd4
	str r1, [r6, #12]	@ 000cffd4 f160
.org 0xcffd6
	ldr r0, [r0, #0]	@ 000cffd6 0068
.org 0xcffd8
	ldr r0, [r0, #4]	@ 000cffd8 4068
.org 0xcffda
	str r0, [r6, #20]	@ 000cffda 7061
.org 0xcffdc
	ldrb r1, [r6, #10]	@ 000cffdc b17a
.org 0xcffde
	movs r0, #1	@ 000cffde 0120
.org 0xcffe0
	movs r5, #0	@ 000cffe0 0025
.org 0xcffe2
	movs r2, #0	@ 000cffe2 0022
.org 0xcffe4
	orrs r0, r1	@ 000cffe4 0843
.org 0xcffe6
	movs r1, #2	@ 000cffe6 0221
.org 0xcffe8
	orrs r0, r1	@ 000cffe8 0843
.org 0xcffea
	strb r0, [r6, #10]	@ 000cffea b072
.org 0xcffec
	str r2, [r6, #92]	@ 000cffec f265
.org 0xcffee
	movs r0, #32	@ 000cffee 2020
.org 0xcfff0
	str r0, [r6, #100]	@ 000cfff0 7066
.org 0xcfff2
	lsls r0, r4, #1	@ 000cfff2 6000
.org 0xcfff4
	subs r0, #1	@ 000cfff4 0138
.org 0xcfff6
	adds r1, r6, #0	@ 000cfff6 311c
.org 0xcfff8
	adds r1, #180	@ 000cfff8 b431
.org 0xcfffa
	strb r0, [r1, #0]	@ 000cfffa 0870
.org 0xcfffc
	adds r0, r6, #0	@ 000cfffc 301c
.org 0xcfffe
	bl 0x1cc9c	@ 000cfffe 4cf74dfe
.org 0xd0002
	cmp r4, #0	@ 000d0002 002c
.org 0xd0004
	beq.n 0xd0014	@ 000d0004 06d0
.org 0xd0006
	ldrb r0, [r6, #10]	@ 000d0006 b07a
.org 0xd0008
	movs r1, #16	@ 000d0008 1021
.org 0xd000a
	orrs r0, r1	@ 000d000a 0843
.org 0xd000c
	b.n 0xd001a	@ 000d000c 05e0
.org 0xd000e
	.byte 0x00	@ 000d000e data
.org 0xd000f
	.byte 0x00	@ 000d000f data
.org 0xd0010
	.byte 0xf4,0x49,0x86,0x08	@ 000d0010 data
.org 0xd0014
	ldrb r1, [r6, #10]	@ 000d0014 b17a
.org 0xd0016
	movs r0, #239	@ 000d0016 ef20
.org 0xd0018
	ands r0, r1	@ 000d0018 0840
.org 0xd001a
	strb r0, [r6, #10]	@ 000d001a b072
.org 0xd001c
	movs r1, #1	@ 000d001c 0121
.org 0xd001e
	ands r1, r4	@ 000d001e 2140
.org 0xd0020
	adds r0, r6, #0	@ 000d0020 301c
.org 0xd0022
	adds r0, #76	@ 000d0022 4c30
.org 0xd0024
	movs r5, #0	@ 000d0024 0025
.org 0xd0026
	strb r1, [r0, #0]	@ 000d0026 0170
.org 0xd0028
	adds r3, r6, #0	@ 000d0028 331c
.org 0xd002a
	adds r3, #74	@ 000d002a 4a33
.org 0xd002c
	lsls r1, r1, #4	@ 000d002c 0901
.org 0xd002e
	ldrb r2, [r3, #0]	@ 000d002e 1a78
.org 0xd0030
	movs r0, #17	@ 000d0030 1120
.org 0xd0032
	negs r0, r0	@ 000d0032 4042
.org 0xd0034
	ands r0, r2	@ 000d0034 1040
.org 0xd0036
	orrs r0, r1	@ 000d0036 0843
.org 0xd0038
	strb r0, [r3, #0]	@ 000d0038 1870
.org 0xd003a
	movs r1, #232	@ 000d003a e821
.org 0xd003c
	lsls r1, r1, #8	@ 000d003c 0902
.org 0xd003e
	adds r0, r6, #0	@ 000d003e 301c
.org 0xd0040
	bl 0x1cf00	@ 000d0040 4cf75eff
.org 0xd0044
	ldrb r1, [r6, #10]	@ 000d0044 b17a
.org 0xd0046
	movs r0, #4	@ 000d0046 0420
.org 0xd0048
	orrs r0, r1	@ 000d0048 0843
.org 0xd004a
	strb r0, [r6, #10]	@ 000d004a b072
.org 0xd004c
	adds r4, r6, #0	@ 000d004c 341c
.org 0xd004e
	adds r4, #116	@ 000d004e 7434
.org 0xd0050
	ldr r1, [pc, #28]	@ 000d0050 0749
.org 0xd0052
	adds r2, r6, #0	@ 000d0052 321c
.org 0xd0054
	adds r2, #84	@ 000d0054 5432
.org 0xd0056
	adds r0, r4, #0	@ 000d0056 201c
.org 0xd0058
	movs r3, #64	@ 000d0058 4023
.org 0xd005a
	bl 0x5760	@ 000d005a 35f781fb
.org 0xd005e
	str r6, [r4, #44]	@ 000d005e e662
.org 0xd0060
	str r5, [r4, #36]	@ 000d0060 6562
.org 0xd0062
	adds r0, r6, #0	@ 000d0062 301c
.org 0xd0064
	bl 0xd0074	@ 000d0064 00f006f8
