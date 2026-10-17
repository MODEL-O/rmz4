// undefined FUN_08068228(void)
// entry 0x8068228


undefined4 FUN_08068228(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080682fc);
    FUN_08005784(param_1 + 0x74,DAT_08068300);
    local_18 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = local_18 + DAT_08068304;
    local_1c = *(int *)(param_1 + 0x54) + DAT_08068308;
    local_18 = local_18 + 0xb00;
    uVar2 = FUN_0809cd78(param_1,&local_1c,1,1);
    *(undefined4 *)(param_1 + 0xd4) = uVar2;
    local_1c = *(int *)(param_1 + 0x54) + 0x1300;
    local_18 = *(int *)(param_1 + 0x58) + 0x2700;
    FUN_0809cd78(param_1,&local_1c,1,0);
    iVar1 = DAT_08068310;
    local_1c = *(int *)(param_1 + 0x54) + DAT_0806830c;
    local_18 = *(int *)(param_1 + 0x58) + DAT_08068310;
    uVar2 = FUN_0809cd78(param_1,&local_1c,0,1);
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
    local_1c = *(int *)(param_1 + 0x54) + 0x2500;
    local_18 = *(int *)(param_1 + 0x58) + iVar1;
    FUN_0809cd78(param_1,&local_1c,0,0);
    FUN_08002b10(0x66);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (6 < *(byte *)(*(int *)(param_1 + 0xd0) + 0xd)) {
    *(undefined1 *)(param_1 + 0xd) = 0x1e;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


