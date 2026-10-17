// undefined FUN_0807e1ac(void)
// entry 0x807e1ac


undefined4 FUN_0807e1ac(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x148);
    *DAT_0807e2b4 = (short)DAT_0807e2b8;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
    FUN_0807e8c8(param_1,0x1c);
    iVar2 = *(int *)(param_1 + 0xb4) + 0x7800;
    *(int *)(param_1 + 0x5c) = iVar2;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0xb8) + 0x1500;
    *(int *)(param_1 + 100) = iVar2 - *(int *)(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807e2c0) * 4 +
                        DAT_0807e2bc)));
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  iVar2 = (int)*(short *)((*(byte *)(param_1 + 0x12) & 0x7f) * 4 + DAT_0807e2c4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  iVar3 = (int)*(short *)((iVar2 >> 2 & 0xffU) * 2 + DAT_0807e2c4);
  iVar2 = iVar3 * -*(int *)(param_1 + 100);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) + (iVar2 >> 8);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  uVar1 = (ushort)(iVar3 >> 4);
  DAT_0807e2b4[1] = uVar1 & 0x1f | (0x10 - uVar1) * 0x100;
  if (cVar4 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


