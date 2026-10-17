// undefined FUN_0806eb30(void)
// entry 0x806eb30


undefined4 FUN_0806eb30(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  char local_20 [8];
  int local_18;
  undefined4 local_14;
  
  FUN_08129258(local_20,DAT_0806eb84,5);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0806eb88);
    FUN_0801cf00(param_1,0xad00);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined1 *)(param_1 + 0x12) = 5;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar2 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar2;
  if (iVar2 < 1) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      FUN_08002b10(DAT_0806ebf0);
      local_18 = *(int *)(param_1 + 0x54) + DAT_0806ebf4;
      local_14 = *(undefined4 *)(param_1 + 0x58);
      cVar1 = local_20[5 - *(byte *)(param_1 + 0x12) & 0xff];
      FUN_080bd94c(param_1,&local_18,2,cVar1);
      local_18 = *(int *)(param_1 + 0x54) + 0x1000;
      FUN_080bd94c(param_1,&local_18,2,-0x80 - cVar1);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      *(undefined4 *)(param_1 + 100) = 0x50;
    }
  }
  return in_lr;
}


