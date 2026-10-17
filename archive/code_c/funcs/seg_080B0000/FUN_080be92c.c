// undefined FUN_080be92c(void)
// entry 0x80be92c


undefined4 FUN_080be92c(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080be9b0);
    FUN_0801cf00(param_1,0x9100);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar4 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar4;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((bVar4 & 3) == 0) {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    FUN_080e27a8(&local_1c,0,bVar1 >> 4 & 1);
  }
  piVar5 = (int *)(param_1 + 0xb4);
  if (*piVar5 == 0) {
    iVar2 = FUN_080be780(uVar6,param_1,param_1 + 0x54);
    *piVar5 = iVar2;
  }
  else if ((*(uint *)(*piVar5 + 0x8c) & 0x800) != 0) {
    *piVar5 = 0;
  }
  uVar3 = FUN_0801fb14(DAT_080bea14,param_1 + 0x54);
  if (0x3000 < uVar3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bea18);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0xc);
  }
  return in_lr;
}


