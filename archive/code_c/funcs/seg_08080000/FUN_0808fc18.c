// undefined FUN_0808fc18(void)
// entry 0x808fc18


undefined4 FUN_0808fc18(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar2 = DAT_0808fd2c;
  puVar1 = DAT_0808fd28;
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar4 = DAT_0808fd2c * *DAT_0808fd28 + DAT_0808fd30;
  *DAT_0808fd28 = uVar4 & 0x7fffffff;
  iVar8 = ((uVar4 & 0x7fffffff) >> 0x10 & 1) + 2;
  if (iVar8 != 0) {
    do {
      iVar5 = *(int *)(param_1 + 0x54);
      uVar4 = iVar2 * *puVar1 + DAT_0808fd30;
      uVar7 = iVar2 * (uVar4 & 0x7fffffff) + DAT_0808fd30;
      *puVar1 = uVar7 & 0x7fffffff;
      FUN_080d0ff4(iVar5 + (uVar3 * 2 + -1) * 0x800 +
                   (((uVar4 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100,
                   *(int *)(param_1 + 0x58) + ((uVar7 & 0x7fffffff) >> 0x10 & 7) * 0x100 + 0x500,0);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = DAT_0808fd30;
  iVar2 = DAT_0808fd2c;
  puVar1 = DAT_0808fd28;
  uVar4 = DAT_0808fd2c * *DAT_0808fd28 + DAT_0808fd30;
  *DAT_0808fd28 = uVar4 & 0x7fffffff;
  iVar5 = ((uVar4 & 0x7fffffff) >> 0x10 & 1) + 3;
  if (iVar5 != 0) {
    do {
      iVar6 = *(int *)(param_1 + 0x54);
      uVar4 = iVar2 * *puVar1 + iVar8;
      uVar7 = iVar2 * (uVar4 & 0x7fffffff) + iVar8;
      *puVar1 = uVar7 & 0x7fffffff;
      FUN_080d0ff4(iVar6 + (uVar3 * 2 + -1) * -0x1000 +
                   (((uVar4 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100,
                   *(int *)(param_1 + 0x58) + (((uVar7 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100,0);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return in_lr;
}


