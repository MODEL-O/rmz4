// undefined FUN_0810d664(void)
// entry 0x810d664


undefined4 FUN_0810d664(void)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
  iVar5 = DAT_0810d6e8;
  for (piVar6 = *(int **)(DAT_0810d6e4 + 0x588); piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
    if ((*(ushort *)((int)piVar6 + 6) & 0x8000) != 0) {
      *(ushort *)((int)piVar6 + 6) = *(ushort *)((int)piVar6 + 6) & 0x7fff;
      iVar4 = DAT_0810d6c4;
      piVar3 = DAT_0810d6c0;
      uVar1 = *DAT_0810d6ec;
      uVar2 = *(ushort *)((int)piVar6 + 6);
      *DAT_0810d6c0 = (*(ushort *)(piVar6 + 1) & 0xfff) * 0x40 + iVar5;
      piVar3[1] = (uVar1 & 0xc) * 0x1000 + 0x6000000 + (uint)uVar2 * 0x20;
      piVar3[2] = iVar4;
    }
  }
  return in_lr;
}


