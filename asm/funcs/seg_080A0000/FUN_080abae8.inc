@ FUN_080abae8  entry 0x080abae8  size 58
.thumb
.org 0xabae8
FUN_080abae8:
	push {lr}	@ 000abae8 00b5
.org 0xabaea
	adds r2, r0, #0	@ 000abaea 021c
.org 0xabaec
	ldr r0, [r2, #40]	@ 000abaec 906a
.org 0xabaee
	ldrb r0, [r0, #12]	@ 000abaee 007b
.org 0xabaf0
	cmp r0, #1	@ 000abaf0 0128
.org 0xabaf2
	bls.n 0xabb14	@ 000abaf2 0fd9
.org 0xabaf4
	ldr r1, [pc, #24]	@ 000abaf4 0649
.org 0xabaf6
	ldrb r0, [r2, #9]	@ 000abaf6 507a
.org 0xabaf8
	lsls r0, r0, #2	@ 000abaf8 8000
.org 0xabafa
	adds r0, r0, r1	@ 000abafa 4018
.org 0xabafc
	movs r1, #2	@ 000abafc 0221
.org 0xabafe
	str r1, [r2, #12]	@ 000abafe d160
.org 0xabb00
	ldr r0, [r0, #0]	@ 000abb00 0068
.org 0xabb02
	ldr r0, [r0, #8]	@ 000abb02 8068
.org 0xabb04
	str r0, [r2, #20]	@ 000abb04 5061
.org 0xabb06
	adds r0, r2, #0	@ 000abb06 101c
.org 0xabb08
	bl 0xabdf8	@ 000abb08 00f076f9
.org 0xabb0c
	b.n 0xabb24	@ 000abb0c 0ae0
.org 0xabb0e
	.byte 0x00	@ 000abb0e data
.org 0xabb0f
	.byte 0x00	@ 000abb0f data
.org 0xabb10
	.byte 0x40,0xdb,0x85,0x08	@ 000abb10 data
.org 0xabb14
	ldr r0, [pc, #16]	@ 000abb14 0448
.org 0xabb16
	ldrb r1, [r2, #13]	@ 000abb16 517b
.org 0xabb18
	lsls r1, r1, #2	@ 000abb18 8900
.org 0xabb1a
	adds r1, r1, r0	@ 000abb1a 0918
.org 0xabb1c
	ldr r1, [r1, #0]	@ 000abb1c 0968
.org 0xabb1e
	adds r0, r2, #0	@ 000abb1e 101c
.org 0xabb20
	bl 0x128f80	@ 000abb20 7df02efa
