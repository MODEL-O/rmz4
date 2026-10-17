// undefined FUN_08078484(void)
// entry 0x8078484


undefined4 FUN_08078484(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = *(int *)(param_1 + 0xd0);
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
      *(undefined4 *)(iVar3 + 0x8c) = 0;
      *(undefined4 *)(iVar3 + 0x90) = 0;
      *(undefined1 *)(iVar3 + 0x94) = 0;
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
      piVar2 = (int *)((uint)*(byte *)(iVar3 + 9) * 4 + DAT_08078544);
      *(undefined4 *)(iVar3 + 0xc) = 3;
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
      *(int *)(param_1 + 0xd0) = 0;
    }
    FUN_08078fdc(param_1,3);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_0807854c) * 4 +
                        DAT_08078548)));
  FUN_08078fa0(param_1);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x04')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


