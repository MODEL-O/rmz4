// undefined FUN_080d2744(void)
// entry 0x80d2744


undefined4 FUN_080d2744(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  puVar4 = (undefined4 *)(param_1 + 0x54);
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) != '\0') {
    FUN_0801cc9c(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(int *)(param_1 + 0x40) = param_1 + 0x74;
    if (*(char *)(iVar3 + 8) == '\x02') {
      *(char *)(param_1 + 0x25) = *(char *)(param_1 + 0x10) + '\x19';
      FUN_0801d3d0(param_1,8);
    }
    else {
      *(char *)(param_1 + 0x25) = *(char *)(param_1 + 0x10) + '\x11';
      FUN_0801d3d0(param_1,0xc);
    }
    iVar1 = DAT_080d27d0;
    iVar2 = 2;
    do {
      *puVar4 = *(undefined4 *)(iVar3 + 0x54);
      puVar4[1] = *(undefined4 *)(iVar3 + 0x58);
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    *(undefined1 *)(param_1 + 0x12) = 3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)((uint)*(byte *)(param_1 + 9) * 4 + iVar1) + 4);
    FUN_080d27d4(param_1);
  }
  return in_lr;
}


