@ FUN_0807d71c  entry 0x0807d71c  size 114
.thumb
.org 0x7d71c
FUN_0807d71c:
	push {r4, r5, lr}	@ 0007d71c 30b5
.org 0x7d71e
	adds r4, r0, #0	@ 0007d71e 041c
.org 0x7d720
	ldrb r0, [r4, #15]	@ 0007d720 e07b
.org 0x7d722
	cmp r0, #0	@ 0007d722 0028
.org 0x7d724
	bne.n 0x7d738	@ 0007d724 08d1
.org 0x7d726
	adds r0, r4, #0	@ 0007d726 201c
.org 0x7d728
	movs r1, #0	@ 0007d728 0021
.org 0x7d72a
	bl 0x7e8c8	@ 0007d72a 01f0cdf8
.org 0x7d72e
	movs r0, #16	@ 0007d72e 1020
.org 0x7d730
	strb r0, [r4, #18]	@ 0007d730 a074
.org 0x7d732
	ldrb r0, [r4, #15]	@ 0007d732 e07b
.org 0x7d734
	adds r0, #1	@ 0007d734 0130
.org 0x7d736
	strb r0, [r4, #15]	@ 0007d736 e073
.org 0x7d738
	adds r5, r4, #0	@ 0007d738 251c
.org 0x7d73a
	adds r5, #188	@ 0007d73a bc35
.org 0x7d73c
	ldrb r0, [r5, #0]	@ 0007d73c 2878
.org 0x7d73e
	cmp r0, #0	@ 0007d73e 0028
.org 0x7d740
	beq.n 0x7d748	@ 0007d740 02d0
.org 0x7d742
	adds r0, r4, #0	@ 0007d742 201c
.org 0x7d744
	bl 0x1cff0	@ 0007d744 9ff754fc
.org 0x7d748
	adds r0, r4, #0	@ 0007d748 201c
.org 0x7d74a
	adds r0, #116	@ 0007d74a 7430
.org 0x7d74c
	ldr r3, [pc, #64]	@ 0007d74c 104b
.org 0x7d74e
	ldr r2, [pc, #68]	@ 0007d74e 114a
.org 0x7d750
	ldrb r1, [r5, #0]	@ 0007d750 2978
.org 0x7d752
	lsls r1, r1, #1	@ 0007d752 4900
.org 0x7d754
	adds r1, r1, r2	@ 0007d754 8918
.org 0x7d756
	ldrh r2, [r1, #0]	@ 0007d756 0a88
.org 0x7d758
	lsls r2, r2, #2	@ 0007d758 9200
.org 0x7d75a
	adds r2, r2, r3	@ 0007d75a d218
.org 0x7d75c
	adds r1, r4, #0	@ 0007d75c 211c
.org 0x7d75e
	adds r1, #113	@ 0007d75e 7131
.org 0x7d760
	ldrb r1, [r1, #0]	@ 0007d760 0978
.org 0x7d762
	lsls r1, r1, #24	@ 0007d762 0906
.org 0x7d764
	asrs r1, r1, #24	@ 0007d764 0916
.org 0x7d766
	ldr r2, [r2, #0]	@ 0007d766 1268
.org 0x7d768
	lsls r1, r1, #2	@ 0007d768 8900
.org 0x7d76a
	adds r1, r1, r2	@ 0007d76a 8918
.org 0x7d76c
	ldr r1, [r1, #0]	@ 0007d76c 0968
.org 0x7d76e
	bl 0x5784	@ 0007d76e 88f709f8
.org 0x7d772
	ldrb r0, [r4, #18]	@ 0007d772 a07c
.org 0x7d774
	subs r0, #1	@ 0007d774 0138
.org 0x7d776
	strb r0, [r4, #18]	@ 0007d776 a074
.org 0x7d778
	lsls r0, r0, #24	@ 0007d778 0006
.org 0x7d77a
	lsrs r1, r0, #24	@ 0007d77a 010e
.org 0x7d77c
	cmp r1, #0	@ 0007d77c 0029
.org 0x7d77e
	bne.n 0x7d788	@ 0007d77e 03d1
.org 0x7d780
	ldrb r0, [r4, #14]	@ 0007d780 a07b
.org 0x7d782
	adds r0, #1	@ 0007d782 0130
.org 0x7d784
	strb r0, [r4, #14]	@ 0007d784 a073
.org 0x7d786
	strb r1, [r4, #15]	@ 0007d786 e173
.org 0x7d788
	pop {r4, r5}	@ 0007d788 30bc
.org 0x7d78a
	pop {r0}	@ 0007d78a 01bc
.org 0x7d78c
	bx r0	@ 0007d78c 0047
