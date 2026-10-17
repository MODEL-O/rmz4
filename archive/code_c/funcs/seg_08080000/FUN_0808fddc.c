// undefined FUN_0808fddc(void)
// entry 0x808fddc


undefined4 FUN_0808fddc(int param_1)

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
  
  iVar4 = DAT_0808fe74;
  iVar3 = DAT_0808fe70;
  puVar2 = DAT_0808fe6c;
  bVar1 = *(byte *)(param_1 + 10);
  uVar5 = DAT_0808fe70 * *DAT_0808fe6c + DAT_0808fe74;
  *DAT_0808fe6c = uVar5 & 0x7fffffff;
  iVar8 = ((uVar5 & 0x7fffffff) >> 0x10 & 1) + 2;
  if (iVar8 != 0) {
    do {
      iVar6 = *(int *)(param_1 + 0x54);
      uVar5 = iVar3 * *puVar2 + iVar4;
      uVar7 = iVar3 * (uVar5 & 0x7fffffff) + iVar4;
      *puVar2 = uVar7 & 0x7fffffff;
      FUN_080d0ff4(iVar6 + ((bVar1 >> 4 & 1) * 2 + -1) * -0x1000 +
                   (((uVar5 & 0x7fffffff) >> 0x10 & 0xf) - 7) * 0x100,
                   *(int *)(param_1 + 0x58) + (((uVar7 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100,0);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return in_lr;
}


