@ FUN_080c68fc  entry 0x080c68fc  size 152
.thumb
.org 0xc68fc
FUN_080c68fc:
	push {r4, lr}	@ 000c68fc 10b5
.org 0xc68fe
	adds r4, r0, #0	@ 000c68fe 041c
.org 0xc6900
	ldrb r0, [r4, #14]	@ 000c6900 a07b
.org 0xc6902
	cmp r0, #0	@ 000c6902 0028
.org 0xc6904
	bne.n 0xc6944	@ 000c6904 1ed1
.org 0xc6906
	adds r0, r4, #0	@ 000c6906 201c
.org 0xc6908
	bl 0x1cff0	@ 000c6908 56f772fb
.org 0xc690c
	adds r0, r4, #0	@ 000c690c 201c
.org 0xc690e
	adds r0, #113	@ 000c690e 7130
.org 0xc6910
	ldrb r0, [r0, #0]	@ 000c6910 0078
.org 0xc6912
	lsls r0, r0, #24	@ 000c6912 0006
.org 0xc6914
	asrs r0, r0, #24	@ 000c6914 0016
.org 0xc6916
	cmp r0, #2	@ 000c6916 0228
.org 0xc6918
	ble.n 0xc699a	@ 000c6918 3fdd
.org 0xc691a
	adds r0, r4, #0	@ 000c691a 201c
.org 0xc691c
	adds r0, #116	@ 000c691c 7430
.org 0xc691e
	ldr r2, [pc, #28]	@ 000c691e 074a
.org 0xc6920
	ldrb r1, [r4, #17]	@ 000c6920 617c
.org 0xc6922
	adds r1, r1, r2	@ 000c6922 8918
.org 0xc6924
	ldrb r2, [r1, #0]	@ 000c6924 0a78
.org 0xc6926
	lsls r1, r2, #1	@ 000c6926 5100
.org 0xc6928
	adds r1, r1, r2	@ 000c6928 8918
.org 0xc692a
	lsls r1, r1, #3	@ 000c692a c900
.org 0xc692c
	ldr r2, [pc, #16]	@ 000c692c 044a
.org 0xc692e
	adds r1, r1, r2	@ 000c692e 8918
.org 0xc6930
	bl 0x5784	@ 000c6930 3ef728ff
.org 0xc6934
	ldrb r0, [r4, #14]	@ 000c6934 a07b
.org 0xc6936
	adds r0, #1	@ 000c6936 0130
.org 0xc6938
	strb r0, [r4, #14]	@ 000c6938 a073
.org 0xc693a
	b.n 0xc699a	@ 000c693a 2ee0
.org 0xc693c
	.byte 0xbc,0x5e,0x86,0x08	@ 000c693c data
.org 0xc6940
	.byte 0x28,0x5b,0x86,0x08	@ 000c6940 data
.org 0xc6944
	cmp r0, #1	@ 000c6944 0128
.org 0xc6946
	bne.n 0xc6978	@ 000c6946 17d1
.org 0xc6948
	ldrb r0, [r4, #18]	@ 000c6948 a07c
.org 0xc694a
	subs r0, #1	@ 000c694a 0138
.org 0xc694c
	strb r0, [r4, #18]	@ 000c694c a074
.org 0xc694e
	lsls r0, r0, #24	@ 000c694e 0006
.org 0xc6950
	lsrs r0, r0, #24	@ 000c6950 000e
.org 0xc6952
	cmp r0, #255	@ 000c6952 ff28
.org 0xc6954
	bne.n 0xc696c	@ 000c6954 0ad1
.org 0xc6956
	ldr r1, [pc, #28]	@ 000c6956 0749
.org 0xc6958
	ldrb r0, [r4, #17]	@ 000c6958 607c
.org 0xc695a
	lsls r0, r0, #1	@ 000c695a 4000
.org 0xc695c
	adds r0, r0, r1	@ 000c695c 4018
.org 0xc695e
	ldrh r1, [r0, #0]	@ 000c695e 0188
.org 0xc6960
	adds r0, r4, #0	@ 000c6960 201c
.org 0xc6962
	bl 0x1cf00	@ 000c6962 56f7cdfa
.org 0xc6966
	ldrb r0, [r4, #14]	@ 000c6966 a07b
.org 0xc6968
	adds r0, #1	@ 000c6968 0130
.org 0xc696a
	strb r0, [r4, #14]	@ 000c696a a073
.org 0xc696c
	adds r0, r4, #0	@ 000c696c 201c
.org 0xc696e
	bl 0x1cff0	@ 000c696e 56f73ffb
.org 0xc6972
	b.n 0xc699a	@ 000c6972 12e0
.org 0xc6974
	.byte 0xae,0x5e,0x86,0x08	@ 000c6974 data
.org 0xc6978
	adds r0, r4, #0	@ 000c6978 201c
.org 0xc697a
	bl 0x1cff0	@ 000c697a 56f739fb
.org 0xc697e
	adds r0, r4, #0	@ 000c697e 201c
.org 0xc6980
	adds r0, #115	@ 000c6980 7330
.org 0xc6982
	ldrb r0, [r0, #0]	@ 000c6982 0078
.org 0xc6984
	cmp r0, #3	@ 000c6984 0328
.org 0xc6986
	bne.n 0xc699a	@ 000c6986 08d1
.org 0xc6988
	ldr r1, [pc, #20]	@ 000c6988 0549
.org 0xc698a
	ldrb r0, [r4, #9]	@ 000c698a 607a
.org 0xc698c
	lsls r0, r0, #2	@ 000c698c 8000
.org 0xc698e
	adds r0, r0, r1	@ 000c698e 4018
.org 0xc6990
	movs r1, #2	@ 000c6990 0221
.org 0xc6992
	str r1, [r4, #12]	@ 000c6992 e160
