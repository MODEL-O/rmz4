@ FUN_0808c828  entry 0x0808c828  size 134
.thumb
.org 0x8c828
FUN_0808c828:
	push {r4, lr}	@ 0008c828 10b5
.org 0x8c82a
	sub sp, #8	@ 0008c82a 82b0
.org 0x8c82c
	adds r4, r0, #0	@ 0008c82c 041c
.org 0x8c82e
	ldrb r0, [r4, #15]	@ 0008c82e e07b
.org 0x8c830
	cmp r0, #0	@ 0008c830 0028
.org 0x8c832
	bne.n 0x8c88e	@ 0008c832 2cd1
.org 0x8c834
	movs r0, #44	@ 0008c834 2c20
.org 0x8c836
	bl 0x2b10	@ 0008c836 76f76bf9
.org 0x8c83a
	adds r0, r4, #0	@ 0008c83a 201c
.org 0x8c83c
	adds r0, #180	@ 0008c83c b430
.org 0x8c83e
	ldrb r2, [r0, #0]	@ 0008c83e 0278
.org 0x8c840
	ldr r3, [pc, #108]	@ 0008c840 1b4b
.org 0x8c842
	adds r0, r2, #0	@ 0008c842 101c
.org 0x8c844
	adds r0, #64	@ 0008c844 4030
.org 0x8c846
	lsls r0, r0, #24	@ 0008c846 0006
.org 0x8c848
	lsrs r0, r0, #23	@ 0008c848 c00d
.org 0x8c84a
	adds r0, r0, r3	@ 0008c84a c018
.org 0x8c84c
	movs r1, #0	@ 0008c84c 0021
.org 0x8c84e
	ldrsh r0, [r0, r1]	@ 0008c84e 405e
.org 0x8c850
	lsls r1, r0, #2	@ 0008c850 8100
.org 0x8c852
	adds r1, r1, r0	@ 0008c852 0918
.org 0x8c854
	lsls r1, r1, #2	@ 0008c854 8900
.org 0x8c856
	ldr r0, [r4, #84]	@ 0008c856 606d
.org 0x8c858
	adds r0, r0, r1	@ 0008c858 4018
.org 0x8c85a
	str r0, [sp, #0]	@ 0008c85a 0090
.org 0x8c85c
	lsls r0, r2, #1	@ 0008c85c 5000
.org 0x8c85e
	adds r0, r0, r3	@ 0008c85e c018
.org 0x8c860
	movs r1, #0	@ 0008c860 0021
.org 0x8c862
	ldrsh r0, [r0, r1]	@ 0008c862 405e
.org 0x8c864
	lsls r1, r0, #2	@ 0008c864 8100
.org 0x8c866
	adds r1, r1, r0	@ 0008c866 0918
.org 0x8c868
	lsls r1, r1, #2	@ 0008c868 8900
.org 0x8c86a
	ldr r0, [r4, #88]	@ 0008c86a a06d
.org 0x8c86c
	adds r0, r0, r1	@ 0008c86c 4018
.org 0x8c86e
	str r0, [sp, #4]	@ 0008c86e 0190
.org 0x8c870
	movs r1, #128	@ 0008c870 8021
.org 0x8c872
	lsls r1, r1, #2	@ 0008c872 8900
.org 0x8c874
	adds r2, #128	@ 0008c874 8032
.org 0x8c876
	lsls r2, r2, #24	@ 0008c876 1206
.org 0x8c878
	lsrs r2, r2, #24	@ 0008c878 120e
.org 0x8c87a
	mov r0, sp	@ 0008c87a 6846
.org 0x8c87c
	bl 0xbd4d4	@ 0008c87c 30f02afe
.org 0x8c880
	ldr r1, [pc, #48]	@ 0008c880 0c49
.org 0x8c882
	adds r0, r4, #0	@ 0008c882 201c
.org 0x8c884
	bl 0x1cf00	@ 0008c884 90f73cfb
.org 0x8c888
	ldrb r0, [r4, #15]	@ 0008c888 e07b
.org 0x8c88a
	adds r0, #1	@ 0008c88a 0130
.org 0x8c88c
	strb r0, [r4, #15]	@ 0008c88c e073
.org 0x8c88e
	adds r0, r4, #0	@ 0008c88e 201c
.org 0x8c890
	bl 0x1cff0	@ 0008c890 90f7aefb
.org 0x8c894
	adds r0, r4, #0	@ 0008c894 201c
.org 0x8c896
	adds r0, #115	@ 0008c896 7330
.org 0x8c898
	ldrb r0, [r0, #0]	@ 0008c898 0078
.org 0x8c89a
	cmp r0, #3	@ 0008c89a 0328
.org 0x8c89c
	bne.n 0x8c8a6	@ 0008c89c 03d1
.org 0x8c89e
	movs r1, #0	@ 0008c89e 0021
.org 0x8c8a0
	movs r0, #2	@ 0008c8a0 0220
.org 0x8c8a2
	strb r0, [r4, #14]	@ 0008c8a2 a073
.org 0x8c8a4
	strb r1, [r4, #15]	@ 0008c8a4 e173
.org 0x8c8a6
	add sp, #8	@ 0008c8a6 02b0
.org 0x8c8a8
	pop {r4}	@ 0008c8a8 10bc
.org 0x8c8aa
	pop {r0}	@ 0008c8aa 01bc
.org 0x8c8ac
	bx r0	@ 0008c8ac 0047
