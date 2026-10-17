// undefined FUN_0803f190(void)
// entry 0x803f190


undefined4 FUN_0803f190(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803f1ec);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x5000);
  cVar1 = *(char *)(iVar4 + 9);
  if (cVar1 != '4') {
    if (cVar1 == '\x03') {
      cVar1 = *(char *)(iVar4 + 0x10);
      if ((cVar1 == '\x06') || (cVar1 == '\t')) {
        FUN_08002b10(DAT_0803f1f0);
      }
      else {
        FUN_08002b10(0x16);
      }
    }
    else {
      FUN_08002b10(0x16);
    }
  }
  *(undefined1 *)(param_1 + 0xbb) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  uVar2 = DAT_0803f258;
  FUN_08005760(param_1 + 0x74,DAT_0803f258,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_08005794(param_1 + 0x74,uVar2,*(undefined1 *)(param_1 + 0xb9),0xffffffff,0xffffffff,
               *(undefined1 *)(param_1 + 0xba));
  *(undefined4 *)(param_1 + 0x98) = DAT_0803f25c;
  FUN_0803f260(param_1);
  return in_lr;
}


