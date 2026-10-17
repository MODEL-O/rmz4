// undefined FUN_080d4b48(void)
// entry 0x80d4b48


undefined8 FUN_080d4b48(uint param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_080d4bb0);
  if (iVar4 != 0) {
    *(undefined1 *)(iVar4 + 0x25) = 1;
    iVar2 = DAT_080d4bb4;
    *(undefined1 *)(iVar4 + 9) = 0xf;
    *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x3c);
    *(undefined2 *)(iVar4 + 0x20) = 0;
    *(undefined1 *)(iVar4 + 0x22) = 0;
    *(undefined4 *)(iVar4 + 0x28) = param_2;
    *(int *)(iVar4 + 100) = *param_3;
    *(int *)(iVar4 + 0x68) = param_3[1];
    *(undefined1 *)(iVar4 + 0x10) = 1;
    FUN_0801cc9c(iVar4);
    FUN_0801cf00(iVar4,*(undefined2 *)((param_1 & 0xff) * 2 + DAT_080d4bb8));
    cVar1 = (char)(*param_3 >> 0x1f);
    if (*param_3 < 0) {
      bVar3 = *(byte *)(iVar4 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(iVar4 + 10) & 0xef;
    }
    *(byte *)(iVar4 + 10) = bVar3;
    *(char *)(iVar4 + 0x4c) = -cVar1;
    *(byte *)(iVar4 + 0x4a) = *(byte *)(iVar4 + 0x4a) & 0xef | cVar1 * -0x10;
  }
  return CONCAT44(in_lr,iVar4);
}


