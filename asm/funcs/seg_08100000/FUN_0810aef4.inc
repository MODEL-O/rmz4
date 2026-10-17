@ FUN_0810aef4  entry 0x0810aef4  size 98
.thumb
.org 0x10aef4
FUN_0810aef4:
	push {r4, lr}	@ 0010aef4 10b5
.org 0x10aef6
	adds r4, r0, #0	@ 0010aef6 041c
.org 0x10aef8
	bl 0x1cc9c	@ 0010aef8 11f7d0fe
.org 0x10aefc
	ldrb r1, [r4, #10]	@ 0010aefc a17a
.org 0x10aefe
	movs r0, #1	@ 0010aefe 0120
.org 0x10af00
	movs r2, #0	@ 0010af00 0022
.org 0x10af02
	orrs r0, r1	@ 0010af02 0843
.org 0x10af04
	movs r1, #2	@ 0010af04 0221
.org 0x10af06
	orrs r0, r1	@ 0010af06 0843
.org 0x10af08
	strb r0, [r4, #10]	@ 0010af08 a072
.org 0x10af0a
	adds r0, r4, #0	@ 0010af0a 201c
.org 0x10af0c
	adds r0, #76	@ 0010af0c 4c30
.org 0x10af0e
	strb r2, [r0, #0]	@ 0010af0e 0270
.org 0x10af10
	adds r2, r4, #0	@ 0010af10 221c
.org 0x10af12
	adds r2, #74	@ 0010af12 4a32
.org 0x10af14
	ldrb r1, [r2, #0]	@ 0010af14 1178
.org 0x10af16
	movs r0, #17	@ 0010af16 1120
.org 0x10af18
	negs r0, r0	@ 0010af18 4042
.org 0x10af1a
	ands r0, r1	@ 0010af1a 0840
.org 0x10af1c
	strb r0, [r2, #0]	@ 0010af1c 1070
.org 0x10af1e
	ldrb r1, [r4, #10]	@ 0010af1e a17a
.org 0x10af20
	movs r0, #239	@ 0010af20 ef20
.org 0x10af22
	ands r0, r1	@ 0010af22 0840
.org 0x10af24
	strb r0, [r4, #10]	@ 0010af24 a072
.org 0x10af26
	movs r0, #208	@ 0010af26 d020
.org 0x10af28
	lsls r0, r0, #7	@ 0010af28 c001
.org 0x10af2a
	str r0, [r4, #84]	@ 0010af2a 6065
.org 0x10af2c
	ldrb r0, [r4, #17]	@ 0010af2c 607c
.org 0x10af2e
	lsls r0, r0, #12	@ 0010af2e 0003
.org 0x10af30
	movs r1, #128	@ 0010af30 8021
.org 0x10af32
	lsls r1, r1, #5	@ 0010af32 4901
.org 0x10af34
	adds r0, r0, r1	@ 0010af34 4018
.org 0x10af36
	str r0, [r4, #88]	@ 0010af36 a065
.org 0x10af38
	ldr r1, [pc, #28]	@ 0010af38 0749
.org 0x10af3a
	ldrb r0, [r4, #9]	@ 0010af3a 607a
.org 0x10af3c
	lsls r0, r0, #2	@ 0010af3c 8000
.org 0x10af3e
	adds r0, r0, r1	@ 0010af3e 4018
.org 0x10af40
	movs r1, #1	@ 0010af40 0121
.org 0x10af42
	str r1, [r4, #12]	@ 0010af42 e160
.org 0x10af44
	ldr r0, [r0, #0]	@ 0010af44 0068
.org 0x10af46
	ldr r0, [r0, #4]	@ 0010af46 4068
.org 0x10af48
	str r0, [r4, #20]	@ 0010af48 6061
.org 0x10af4a
	adds r0, r4, #0	@ 0010af4a 201c
.org 0x10af4c
	bl 0x10ada0	@ 0010af4c fff728ff
.org 0x10af50
	pop {r4}	@ 0010af50 10bc
.org 0x10af52
	pop {r0}	@ 0010af52 01bc
.org 0x10af54
	bx r0	@ 0010af54 0047
