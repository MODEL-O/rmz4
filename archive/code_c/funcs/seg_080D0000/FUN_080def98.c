// undefined FUN_080def98(void)
// entry 0x80def98


undefined4 FUN_080def98(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if ((((*(uint *)(iVar5 + 0x8c) & 0x200) == 0) && (*(short *)(iVar5 + 0xa4) != 0)) &&
     (*(byte *)(iVar5 + 0xc) < 3)) {
    if (*(int *)(iVar5 + 0xec) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      if (*(int *)(iVar5 + 0xec) < 1) {
        if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) !=
            DAT_080df054) {
          FUN_0801cf00(param_1);
        }
      }
      else if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) !=
               DAT_080df01c) {
        FUN_0801cf00(param_1);
      }
      FUN_0801cff0(param_1);
      bVar1 = *(byte *)(iVar5 + 10) >> 4;
      bVar4 = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4c) = bVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
      if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(iVar5 + 0x54) +
                (int)*(short *)((uint)*(byte *)(iVar5 + 0x174) * 2 + DAT_080df0d0);
      }
      else {
        iVar3 = *(int *)(iVar5 + 0x54) -
                (int)*(short *)((uint)*(byte *)(iVar5 + 0x174) * 2 + DAT_080df09c);
      }
      *(int *)(param_1 + 0x54) = iVar3;
      *(int *)(param_1 + 0x58) =
           *(int *)(iVar5 + 0x58) +
           (int)*(short *)((uint)*(byte *)(iVar5 + 0x174) * 2 + DAT_080df0d4);
    }
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080defdc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080decf8(param_1);
  }
  return in_lr;
}


