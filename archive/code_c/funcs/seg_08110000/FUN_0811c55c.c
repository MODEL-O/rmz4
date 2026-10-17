// undefined FUN_0811c55c(void)
// entry 0x811c55c


undefined4 FUN_0811c55c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = param_1 + DAT_0811c5d8;
  *(undefined1 *)(iVar2 + 0x19) = 0;
  cVar1 = FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 2) * 4 + DAT_0811c5dc));
  if (cVar1 != '\0') {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 2) * 4 + DAT_0811c5e0));
  }
  if (*(char *)(iVar2 + 0x1b) != '\0') {
    *(undefined1 *)(param_1 + 1) = 3;
  }
  FUN_080025d8(0x2f);
  if (*(char *)(iVar2 + 0x19) == '\0') {
    if (*(char *)(iVar2 + 0x1a) == '2') {
      *(undefined1 *)(iVar2 + 0x1a) = 0x31;
      FUN_08002624(0x30);
      FUN_08002624(0x32);
      FUN_0800249c(0x31,0);
      FUN_0800249c(0x3a,0);
    }
    FUN_080025d8(0x31);
    FUN_080025d8(0x3a);
  }
  else {
    if (*(char *)(iVar2 + 0x1a) == '1') {
      *(undefined1 *)(iVar2 + 0x1a) = 0x32;
      FUN_08002624(0x31);
      FUN_08002624(0x3a);
      FUN_0800249c(0x30,0);
      FUN_0800249c(0x32,0);
    }
    FUN_080025d8(0x30);
    FUN_080025d8(0x32);
  }
  return in_lr;
}


