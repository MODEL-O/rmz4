// undefined FUN_080001d4(void)
// entry 0x80001d4


undefined4 FUN_080001d4(undefined4 param_1,undefined2 param_2,uint param_3,undefined2 *param_4)

{
  ushort uVar1;
  int iVar2;
  
  param_3 = param_3 & param_3 >> 0x10;
  do {
  } while ((param_3 & 0x2000) != 0);
  iVar2 = 0x1c;
  uVar1 = (ushort)(param_3 & 0x80);
  if ((param_3 & 0x80) == 0) {
    iVar2 = 0x18;
    uVar1 = (ushort)(param_3 & 0x40);
    if ((param_3 & 0x40) == 0) {
      iVar2 = 0;
      uVar1 = (ushort)(param_3 & 1);
      if ((param_3 & 1) == 0) {
        iVar2 = 4;
        uVar1 = (ushort)(param_3 & 2);
        if ((param_3 & 2) == 0) {
          iVar2 = 8;
          uVar1 = (ushort)(param_3 & 4);
          if ((param_3 & 4) == 0) {
            iVar2 = 0xc;
            uVar1 = (ushort)(param_3 & 8);
            if ((param_3 & 8) == 0) {
              iVar2 = 0x10;
              uVar1 = (ushort)(param_3 & 0x10);
              if ((param_3 & 0x10) == 0) {
                iVar2 = 0x14;
                uVar1 = (ushort)(param_3 & 0x20);
                if ((param_3 & 0x20) == 0) {
                  iVar2 = 0x24;
                  uVar1 = (ushort)(param_3 & 0x200);
                  if ((param_3 & 0x200) == 0) {
                    iVar2 = 0x28;
                    uVar1 = (ushort)(param_3 & 0x400);
                    if ((param_3 & 0x400) == 0) {
                      iVar2 = 0x20;
                      uVar1 = (ushort)(param_3 & 0x100);
                      if ((param_3 & 0x100) == 0) {
                        iVar2 = 0x2c;
                        uVar1 = (ushort)(param_3 & 0x800);
                        if ((param_3 & 0x800) == 0) {
                          iVar2 = 0x30;
                          uVar1 = (ushort)param_3 & 0x1000;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  param_4[1] = uVar1;
  *param_4 = (short)0x000029ce;
  (**(code **)(0x03001590 + iVar2))();
  *param_4 = param_2;
  return param_1;
}


