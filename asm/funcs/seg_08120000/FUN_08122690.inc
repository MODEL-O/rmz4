@ FUN_08122690  entry 0x08122690  size 72
.thumb
.org 0x122690
FUN_08122690:
	push {r4, r5, r6, lr}	@ 00122690 70b5
.org 0x122692
	adds r5, r0, #0	@ 00122692 051c
.org 0x122694
	ldr r0, [pc, #64]	@ 00122694 1048
.org 0x122696
	adds r1, r5, r0	@ 00122696 2918
.org 0x122698
	movs r0, #240	@ 00122698 f020
.org 0x12269a
	lsls r0, r0, #7	@ 0012269a c001
.org 0x12269c
	str r0, [r1, #0]	@ 0012269c 0860
.org 0x12269e
	movs r0, #160	@ 0012269e a020
.org 0x1226a0
	lsls r0, r0, #7	@ 001226a0 c001
.org 0x1226a2
	str r0, [r1, #4]	@ 001226a2 4860
.org 0x1226a4
	ldr r0, [pc, #52]	@ 001226a4 0d48
.org 0x1226a6
	adds r6, r5, r0	@ 001226a6 2e18
.org 0x1226a8
	adds r0, r6, #0	@ 001226a8 301c
.org 0x1226aa
	movs r2, #0	@ 001226aa 0022
.org 0x1226ac
	movs r3, #0	@ 001226ac 0023
.org 0x1226ae
	bl 0x2c0c	@ 001226ae e0f6adfa
.org 0x1226b2
	ldr r0, [pc, #44]	@ 001226b2 0b48
.org 0x1226b4
	adds r4, r5, r0	@ 001226b4 2c18
.org 0x1226b6
	adds r0, r4, #0	@ 001226b6 201c
.org 0x1226b8
	bl 0x3384	@ 001226b8 e0f664fe
.org 0x1226bc
	adds r0, r4, #0	@ 001226bc 201c
.org 0x1226be
	adds r1, r6, #0	@ 001226be 311c
.org 0x1226c0
	bl 0x33bc	@ 001226c0 e0f67cfe
.org 0x1226c4
	ldr r0, [pc, #28]	@ 001226c4 0748
.org 0x1226c6
	adds r5, r5, r0	@ 001226c6 2d18
.org 0x1226c8
	ldr r1, [pc, #28]	@ 001226c8 0749
.org 0x1226ca
	adds r0, r5, #0	@ 001226ca 281c
.org 0x1226cc
	movs r2, #64	@ 001226cc 4022
.org 0x1226ce
	bl 0x10a1b4	@ 001226ce e7f771fd
.org 0x1226d2
	pop {r4, r5, r6}	@ 001226d2 70bc
.org 0x1226d4
	pop {r0}	@ 001226d4 01bc
.org 0x1226d6
	bx r0	@ 001226d6 0047
