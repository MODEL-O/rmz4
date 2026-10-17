// undefined FUN_0808fd34(void)
// entry 0x808fd34


undefined4 FUN_0808fd34(int param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar4 = DAT_0808fdd8;
  iVar3 = DAT_0808fdd4;
  puVar2 = DAT_0808fdd0;
  bVar1 = *(byte *)(param_1 + 10);
  uVar5 = *DAT_0808fdd0 * DAT_0808fdd4 + DAT_0808fdd8;
  *DAT_0808fdd0 = uVar5 & 0x7fffffff;
  iVar8 = ((uVar5 & 0x7fffffff) >> 0x10 & 1) + 1;
  if (iVar8 != 0) {
    do {
      iVar6 = *(int *)(param_1 + 0x54);
      uVar5 = iVar3 * *puVar2 + iVar4;
      uVar7 = iVar3 * (uVar5 & 0x7fffffff) + iVar4;
      *puVar2 = uVar7 & 0x7fffffff;
      FUN_080d0ff4(iVar6 + ((bVar1 >> 4 & 1) * 2 + -1) * 0x800 +
                   (((uVar5 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100,
                   *(int *)(param_1 + 0x58) + (((uVar7 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100,0);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return in_lr;
}


