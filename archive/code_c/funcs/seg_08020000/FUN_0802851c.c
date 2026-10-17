// undefined FUN_0802851c(void)
// entry 0x802851c


longlong FUN_0802851c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 1);
  FUN_080276dc(cVar1,*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
  if ((*(short *)(*(int *)(param_1 + 0xc) + 2) == 0) && (cVar1 == '\0')) {
    iVar4 = *(int *)(param_1 + 0x10);
    if ((*(ushort *)(DAT_08028564 + 0x1d0) & 0x7f) == 4) {
      iVar2 = FUN_08129050(*(int *)(iVar4 + 0x54) + DAT_08028568,0x3c000);
      iVar2 = iVar2 + 0xf000;
    }
    else {
      iVar2 = *(int *)(iVar4 + 0x54);
    }
    uVar3 = FUN_08008534(iVar2,*(undefined4 *)(iVar4 + 0x58));
    *(undefined4 *)(iVar4 + 0x58) = uVar3;
  }
  return (ulonglong)in_lr << 0x20;
}


