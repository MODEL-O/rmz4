// undefined FUN_080cd9fc(void)
// entry 0x80cd9fc


undefined4 FUN_080cd9fc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    FUN_0801cff0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + 0x400;
    *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + DAT_080cda78;
    iVar2 = DAT_080cda7c;
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined1 *)(DAT_080cda7c + DAT_080cda80) = 1;
      *(undefined2 *)(iVar2 + DAT_080cda84) = 1;
      piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cda88);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
      FUN_080cda8c(param_1);
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cda24);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080cda8c(param_1);
  }
  return in_lr;
}


