@ FUN_08007020  entry 0x08007020  size 104
.thumb
.org 0x7020
FUN_08007020:
	push {r4, r5, r6, lr}	@ 00007020 70b5
.org 0x7022
	adds r2, r0, #0	@ 00007022 021c
.org 0x7024
	adds r6, r1, #0	@ 00007024 0e1c
.org 0x7026
	ldr r5, [pc, #56]	@ 00007026 0e4d
.org 0x7028
	movs r1, #232	@ 00007028 e821
.org 0x702a
	lsls r1, r1, #1	@ 0000702a 4900
.org 0x702c
	adds r0, r5, r1	@ 0000702c 6818
.org 0x702e
	ldrh r0, [r0, #0]	@ 0000702e 0088
.org 0x7030
	cmp r0, #4	@ 00007030 0428
.org 0x7032
	bne.n 0x7046	@ 00007032 08d1
.org 0x7034
	ldr r1, [pc, #44]	@ 00007034 0b49
.org 0x7036
	adds r0, r2, r1	@ 00007036 5018
.org 0x7038
	movs r1, #240	@ 00007038 f021
.org 0x703a
	lsls r1, r1, #10	@ 0000703a 8902
.org 0x703c
	bl 0x129050	@ 0000703c 22f108f8
.org 0x7040
	movs r1, #240	@ 00007040 f021
.org 0x7042
	lsls r1, r1, #8	@ 00007042 0902
.org 0x7044
	adds r2, r0, r1	@ 00007044 4218
.org 0x7046
	asrs r4, r2, #12	@ 00007046 1413
.org 0x7048
	asrs r3, r6, #12	@ 00007048 3313
.org 0x704a
	movs r0, #238	@ 0000704a ee20
.org 0x704c
	lsls r0, r0, #3	@ 0000704c c000
.org 0x704e
	cmp r4, r0	@ 0000704e 8442
.org 0x7050
	bhi.n 0x705c	@ 00007050 04d8
.org 0x7052
	cmp r3, #0	@ 00007052 002b
.org 0x7054
	blt.n 0x705c	@ 00007054 02db
.org 0x7056
	ldr r0, [pc, #16]	@ 00007056 0448
.org 0x7058
	cmp r3, r0	@ 00007058 8342
.org 0x705a
	ble.n 0x7070	@ 0000705a 09dd
.org 0x705c
	ldr r0, [pc, #12]	@ 0000705c 0348
.org 0x705e
	b.n 0x7092	@ 0000705e 18e0
.org 0x7060
	.byte 0xb0,0x0a,0x00,0x02	@ 00007060 data
.org 0x7064
	.byte 0x00,0x10,0xff,0xff	@ 00007064 data
.org 0x7068
	.byte 0xf5,0x04,0x00,0x00	@ 00007068 data
.org 0x706c
	.byte 0x01,0x0a,0x00,0x00	@ 0000706c data
.org 0x7070
	movs r0, #220	@ 00007070 dc20
.org 0x7072
	lsls r0, r0, #1	@ 00007072 4000
.org 0x7074
	adds r2, r5, r0	@ 00007074 2a18
.org 0x7076
	movs r0, #252	@ 00007076 fc20
.org 0x7078
	lsls r0, r0, #3	@ 00007078 c000
.org 0x707a
	adds r1, r5, r0	@ 0000707a 2918
.org 0x707c
	ldrh r0, [r1, #0]	@ 0000707c 0888
.org 0x707e
	muls r0, r3	@ 0000707e 5843
.org 0x7080
	adds r0, r0, r4	@ 00007080 0019
.org 0x7082
	adds r0, #2	@ 00007082 0230
.org 0x7084
	lsls r0, r0, #1	@ 00007084 4000
.org 0x7086
	adds r0, r0, r1	@ 00007086 4018
