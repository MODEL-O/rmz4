// undefined FUN_080a0090(void)
// entry 0x80a0090


undefined4 FUN_080a0090(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *extraout_r1;
  undefined4 *puVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_1c [3];
  
  local_1c[0] = *DAT_080a0110;
  local_1c[1] = DAT_080a0110[1];
  local_1c[2] = DAT_080a0110[2];
  puVar3 = DAT_080a0110 + 3;
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x19;
    FUN_08005784(param_1 + 0x74,DAT_080a0114);
    FUN_0801cf00(param_1,0x8200);
    *(undefined4 *)(param_1 + 100) = local_1c[bVar1];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    puVar3 = extraout_r1;
  }
  if (*(byte *)(iVar4 + 0xc) < 2) {
    FUN_0801cff0(param_1,puVar3);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar4 = *(int *)(param_1 + 100) + -1;
      *(int *)(param_1 + 100) = iVar4;
      if (iVar4 == 0) {
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a0118);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


