// undefined FUN_08019f08(void)
// entry 0x8019f08


undefined4 FUN_08019f08(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar3 = (int *)(DAT_08019f54 + DAT_08019f58);
  iVar2 = *piVar3;
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined1 *)(iVar2 + 0x94) = 0;
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_08019f5c);
    *(undefined4 *)(iVar2 + 0xc) = 3;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
    *piVar3 = 0;
  }
  return in_lr;
}


