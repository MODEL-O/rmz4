// undefined FUN_080e1310(void)
// entry 0x80e1310


undefined4 FUN_080e1310(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  short asStack_18 [8];
  
  FUN_08129258(asStack_18,DAT_080e1370,0x10);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  uVar2 = FUN_080e1484(param_1);
  if ((uVar2 & 0xff) == 0xff) {
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e1430);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080e1448(param_1);
  }
  else {
    if ((uVar2 & 1) == 0) {
      iVar3 = (int)asStack_18[uVar2 & 0xfe];
    }
    else {
      iVar3 = asStack_18[uVar2 & 0xfe] * -0x100;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      iVar3 = iVar3 >> 8;
    }
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x60) = (int)asStack_18[(uVar2 & 0xfe) + 1];
    if (*(char *)(param_1 + 0x10) == '\x01') {
      iVar3 = *(int *)(param_1 + 0x5c) * 0x17f;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    }
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    cVar1 = FUN_08129198(uVar2 & 0xff,3);
    if (cVar1 == '\0') {
      FUN_0801cf00(param_1,DAT_080e13d4);
    }
    else {
      FUN_0801cf00(param_1,0xf);
    }
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e13fc);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
    FUN_080e1434(param_1);
  }
  return in_lr;
}


