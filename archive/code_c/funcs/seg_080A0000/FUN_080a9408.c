// undefined FUN_080a9408(void)
// entry 0x80a9408


undefined4 FUN_080a9408(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080a9434);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(iVar3 + 0xd);
  if (cVar1 == '\x04') {
    uVar2 = 1;
  }
  else {
    if (cVar1 != '\x05') {
      return in_lr;
    }
    uVar2 = 2;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


