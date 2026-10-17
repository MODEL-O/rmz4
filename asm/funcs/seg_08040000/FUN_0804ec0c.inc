@ FUN_0804ec0c  entry 0x0804ec0c  size 48
.thumb
.org 0x4ec0c
FUN_0804ec0c:
	adds r2, r0, #0	@ 0004ec0c 021c
.org 0x4ec0e
	adds r0, #140	@ 0004ec0e 8c30
.org 0x4ec10
	movs r1, #0	@ 0004ec10 0021
.org 0x4ec12
	str r1, [r0, #0]	@ 0004ec12 0160
.org 0x4ec14
	adds r0, #4	@ 0004ec14 0430
.org 0x4ec16
	str r1, [r0, #0]	@ 0004ec16 0160
.org 0x4ec18
	adds r0, #4	@ 0004ec18 0430
.org 0x4ec1a
	strb r1, [r0, #0]	@ 0004ec1a 0170
.org 0x4ec1c
	ldrb r1, [r2, #10]	@ 0004ec1c 917a
.org 0x4ec1e
	movs r0, #251	@ 0004ec1e fb20
.org 0x4ec20
	ands r0, r1	@ 0004ec20 0840
.org 0x4ec22
	movs r1, #254	@ 0004ec22 fe21
.org 0x4ec24
	ands r0, r1	@ 0004ec24 0840
.org 0x4ec26
	strb r0, [r2, #10]	@ 0004ec26 9072
.org 0x4ec28
	ldr r1, [pc, #16]	@ 0004ec28 0449
.org 0x4ec2a
	ldrb r0, [r2, #9]	@ 0004ec2a 507a
.org 0x4ec2c
	lsls r0, r0, #2	@ 0004ec2c 8000
.org 0x4ec2e
	adds r0, r0, r1	@ 0004ec2e 4018
.org 0x4ec30
	movs r1, #4	@ 0004ec30 0421
.org 0x4ec32
	str r1, [r2, #12]	@ 0004ec32 d160
.org 0x4ec34
	ldr r0, [r0, #0]	@ 0004ec34 0068
.org 0x4ec36
	ldr r0, [r0, #16]	@ 0004ec36 0069
.org 0x4ec38
	str r0, [r2, #20]	@ 0004ec38 5061
.org 0x4ec3a
	bx lr	@ 0004ec3a 7047
