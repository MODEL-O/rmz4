@ FUN_08047864  entry 0x08047864  size 50
.thumb
.org 0x47864
FUN_08047864:
	push {r4, lr}	@ 00047864 10b5
.org 0x47866
	adds r4, r0, #0	@ 00047866 041c
.org 0x47868
	ldr r1, [pc, #44]	@ 00047868 0b49
.org 0x4786a
	ldrb r0, [r4, #9]	@ 0004786a 607a
.org 0x4786c
	lsls r0, r0, #2	@ 0004786c 8000
.org 0x4786e
	adds r0, r0, r1	@ 0004786e 4018
.org 0x47870
	movs r1, #1	@ 00047870 0121
.org 0x47872
	str r1, [r4, #12]	@ 00047872 e160
.org 0x47874
	ldr r0, [r0, #0]	@ 00047874 0068
.org 0x47876
	ldr r0, [r0, #4]	@ 00047876 4068
.org 0x47878
	str r0, [r4, #20]	@ 00047878 6061
.org 0x4787a
	ldr r1, [pc, #32]	@ 0004787a 0849
.org 0x4787c
	ldrb r0, [r4, #16]	@ 0004787c 207c
.org 0x4787e
	lsls r0, r0, #2	@ 0004787e 8000
.org 0x47880
	adds r0, r0, r1	@ 00047880 4018
.org 0x47882
	ldr r1, [r0, #0]	@ 00047882 0168
.org 0x47884
	adds r0, r4, #0	@ 00047884 201c
.org 0x47886
	bl 0x128f80	@ 00047886 e1f07bfb
.org 0x4788a
	adds r0, r4, #0	@ 0004788a 201c
.org 0x4788c
	bl 0x478a0	@ 0004788c 00f008f8
.org 0x47890
	pop {r4}	@ 00047890 10bc
.org 0x47892
	pop {r0}	@ 00047892 01bc
.org 0x47894
	bx r0	@ 00047894 0047
