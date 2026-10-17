// undefined FUN_080cf264(void)
// entry 0x80cf264


undefined4 FUN_080cf264(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cf2f0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  FUN_08005760(param_1 + 0x74,DAT_080cf2f4,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080cf2f8));
  iVar3 = *(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080cf2fc);
  *(int *)(param_1 + 0x5c) = iVar3;
  *(undefined4 *)(param_1 + 0x60) = DAT_080cf300;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar3 = iVar3 * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  FUN_080cf304(param_1);
  return in_lr;
}


