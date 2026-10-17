// undefined FUN_0810af5c(void)
// entry 0x810af5c


undefined4 FUN_0810af5c(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar4 + 1) < 2) {
    FUN_0801cff0(param_1);
    *(undefined4 *)(param_1 + 0x54) = 0x800;
    *(undefined4 *)(param_1 + 0x58) = 0xa00;
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 1;
  cVar2 = *(char *)(iVar4 + 3);
  if (cVar2 == '\x01') {
    if (*(char *)(iVar4 + 2) == '\0') {
      uVar3 = 0x1800;
    }
    else {
      uVar3 = 0x800;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0xa00;
    goto LAB_0810aff0;
  }
  if (cVar2 == '\x02') {
    *(undefined4 *)(param_1 + 0x54) = 0x800;
    bVar1 = *(byte *)(iVar4 + DAT_0810afbc + 2);
    iVar4 = 0x1800;
  }
  else {
    if (cVar2 != '\x03') {
      *(byte *)(param_1 + 10) = bVar1 & 0xfe;
      goto LAB_0810aff0;
    }
    *(undefined4 *)(param_1 + 0x54) = 0x8000;
    if (*(char *)(iVar4 + DAT_0810afd8 + 4) == '\x04') {
      *(undefined4 *)(param_1 + 0x58) = 0x8000;
      goto LAB_0810aff0;
    }
    bVar1 = *(byte *)(iVar4 + DAT_0810afd8 + 4);
    iVar4 = 0x3800;
  }
  *(uint *)(param_1 + 0x58) = (uint)bVar1 * 0x1000 + iVar4;
LAB_0810aff0:
  FUN_0801cff0(param_1);
  return in_lr;
}


