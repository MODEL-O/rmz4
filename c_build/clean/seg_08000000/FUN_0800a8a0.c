// undefined FUN_0800a8a0(void)
// entry 0x800a8a0


void FUN_0800a8a0(void)

{
  int *piVar1;
  int iVar2;
  iVar2 = *(int *)(DAT_0800a8f4 + DAT_0800a8f8);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined1 *)(iVar2 + 0x94) = 0;
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_0800a8fc);
    *(undefined4 *)(iVar2 + 0xc) = 3;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  FUN_08002624(0xc);
  FUN_08002624(0xd);
  return;
}


